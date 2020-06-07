function Initialize()
	Script = SELF:GetName()

	--SET DEFAULT STEPS.
	DefaultSteps = SELF:GetNumberOption('Steps', 25)
	--This is allowed as a global setting because the number of
	--steps required for a transition can vary widely depending
	--on the skin's Update rate.

	--CREATE GLOBAL QUEUE.
	Queue = {}

	--CREATE CURVES TABLE.
	Curves = {}

	--CREATE AUTO-OPTIONS TABLE.
	AutoOptions = {}

	--LOAD MODULES.
	ModuleProfiles()
	ModuleMoveX()
	ModuleMoveY()
	ModuleFade()
	--Modules create new curves, auto-options, shorthand functions and profile functions.
end

function Start(Curve, Meters, Target, Modifier, VariableName, Steps)
	for MeterName in string.gmatch(Meters, '[^%s%,]+') do

		--DEFINE MISSING AND/OR UNFORMATTED PARAMETERS
		local Target       = tonumber(Target)
		local Modifier     = Modifier         or 'To'
		local VariableName = VariableName     or 'Auto'
		local Steps        = tonumber(Steps)  or DefaultSteps

		--IF METER DOES NOT EXIST, TREAT AS A GROUP.
		local Group = SKIN:GetMeter(MeterName) and 0 or 1

		--DETERMINE AUTO-OPTION BEHAVIOR
		local Xi, UpdateFunction
		if VariableName == 'Auto' then
			if Group == 0 then
				local Meter = SKIN:GetMeter(MeterName)
				Xi, UpdateFunction = AutoOptions[Curve](MeterName)
			else
				print('Error: a variable name must be given for transitions on meter groups.')
				return
			end
		else
			Xi = tonumber(SKIN:GetVariable(VariableName, ''))
			UpdateFunction = function(X)
				SKIN:Bang('!SetVariable', VariableName, X)
			end
		end

		--DETERMINE Xf (ENDPOINT) BASED ON MODIFIER.
		local Xf

		if Modifier == 'To' then
			Xf = Target
		elseif Modifier == 'By' then
			Xf = Xi + Target
		else
			Modifier = tonumber(Modifier)
			if math.abs(Modifier - Xi) < math.abs(Target - Xi) then
				Xf = Target
			else
				Xf = Modifier
			end
		end

		--REMOVE EXISTING JOB ON CURRENT METER & OPTION
		for i,v in ipairs(Queue) do
			if (v['n'] == MeterName) and (v['v'] == VariableName) then
				table.remove(Queue, i)
			end
		end

		--ADD NEW JOB
		table.insert(Queue, {
			n  = MeterName,
			v  = VariableName,
			g  = Group,
			t  = 0,
			Xi = Xi,
			Xf = Xf,
			s  = Steps,
			c  = Curve,
			f  = UpdateFunction
		} )

		--IF THE QUEUE WAS PREVIOUSLY EMPTY, ACTIVATE UPDATE().
		if #Queue == 1 then
			SKIN:Bang('!SetOption', Script, 'UpdateDivider', 1)
			SKIN:Bang('!UpdateMeasure', Script)
		end
	end
end

function Update()
	if #Queue > 0 then
		for i,v in ipairs(Queue) do
			local MeterName      = v['n']
			local VariableName   = v['v']
			local Group          = v['g']
			local t              = v['t']
			local Xi             = v['Xi']
			local Xf             = v['Xf']
			local Steps          = v['s']
			local Curve          = v['c']
			local UpdateFunction = v['f']

			if t == Steps then
				X = Xf
				table.remove(Queue, i)
			else
				X = Curves[Curve](t, Xi, Xf, Steps)
				v['t'] = t + 1
			end

			UpdateFunction(X)
			local BangType = (Group == 1) and 'Group' or ''
			SKIN:Bang('!UpdateMeter'..BangType, MeterName)
		end
	end

	--IF THE QUEUE IS NOW EMPTY, DEACTIVATE UPDATE().
	if #Queue == 0 then
		SKIN:Bang('!SetOption', Script, 'UpdateDivider', -1)
	end

	return #Queue
end

-----------------------------------------------------------------------
-- PROFILE MODULE

function ModuleProfiles()
	Profiles = {}
	ProfileFunctions = {}

	--ADD PROFILES FROM SCRIPT OPTIONS
	local CountProfiles = 0
	repeat
		CountProfiles = CountProfiles + 1
		if SELF:GetOption('Profile'..CountProfiles, '') ~= '' then
			local Parameters = {}
			for p in string.gmatch(SELF:GetOption('Profile'..CountProfiles), '[^%;]+') do
				table.insert(Parameters, p)
			end

			--REMOVE FIRST PARAMETER, USE AS THE NAME OF THE PROFILE.
			local ProfileName = table.remove(Parameters, 1)
			Profiles[ProfileName] = Parameters
		else
			CountProfiles = -1
		end
	until CountProfiles == -1

	Profile = function(ProfileName)
		local ShorthandName = Profiles[ProfileName][1]
		local ShorthandFunction = ProfileFunctions[ShorthandName]
		ShorthandFunction(unpack(Profiles[ProfileName], 2))
	end
end

-----------------------------------------------------------------------
-- TRANSITION MODULES

function ModuleMoveX()
	Curves['MoveX'] = function(t, Xi, Xf, Steps)
		return Xi + ((Xf - Xi) / 2) + ((Xf - Xi) / 2) * math.sin(math.pi * ((t / Steps) - 1/2))
	end
	
	AutoOptions['MoveX'] = function(MeterName)
		local Meter = SKIN:GetMeter(MeterName)
		local Xi = Meter:GetX()
		local UpdateFunction = function(X)
			SKIN:Bang('!SetOption', MeterName, 'X', X)
		end
		return Xi, UpdateFunction
	end

	MoveToX = function(Meters, Target, VariableName, Steps)
		Start('MoveX', Meters, Target, 'To', VariableName, Steps)
	end

	MoveByX = function(Meters, Target, VariableName, Steps)
		Start('MoveX', Meters, Target, 'By', VariableName, Steps)
	end

	MoveToggleX = function(Meters, Modifier, Target, VariableName, Steps)
		Start('MoveX', Meters, Target, Modifier, VariableName, Steps)
	end

	if ProfileFunctions then
		ProfileFunctions['MoveToX']     = MoveToX
		ProfileFunctions['MoveByX']     = MoveByX
		ProfileFunctions['MoveToggleX'] = MoveToggleX
	end
end

function ModuleMoveY()
	Curves['MoveY'] = function(t, Xi, Xf, Steps)
		return Xi + ((Xf - Xi) / 2) + ((Xf - Xi) / 2) * math.sin(math.pi * ((t / Steps) - 1/2))
	end

	AutoOptions['MoveY'] = function(MeterName)
		local Meter = SKIN:GetMeter(MeterName)
		local Yi = Meter:GetY()
		local UpdateFunction = function(Y)
			SKIN:Bang('!SetOption', MeterName, 'Y', Y)
		end
		return Yi, UpdateFunction
	end

	MoveToY = function(Meters, Target, VariableName, Steps)
		Start('MoveY', Meters, Target, 'To', VariableName, Steps)
	end

	MoveByY = function(Meters, Target, VariableName, Steps)
		Start('MoveY', Meters, Target, 'By', VariableName, Steps)
	end

	MoveToggleY = function(Meters, Modifier, Target, VariableName, Steps)
		Start('MoveY', Meters, Target, Modifier, VariableName, Steps)
	end

	if ProfileFunctions then
		ProfileFunctions['MoveToY']     = MoveToY
		ProfileFunctions['MoveByY']     = MoveByY
		ProfileFunctions['MoveToggleY'] = MoveToggleY
	end
end

function ModuleFade()
	Curves['Fade'] = function(t, Xi, Xf, Steps)
		return Xi + t * (Xf - Xi) / Steps
	end

	AutoOptions['Fade'] = function(MeterName)
		local Meter = SKIN:GetMeter(MeterName)
		local Ai, UpdateFunction
		if Meter:GetOption('ImageAlpha', '') ~= '' then
			Ai = tonumber(Meter:GetOption('ImageAlpha'))
			UpdateFunction = function(A)
				SKIN:Bang('!SetOption', MeterName, 'ImageAlpha', A)
			end
		else
			for _,Option in ipairs( { 'ImageTint', 'FontColor', 'PrimaryColor', 'BarColor', 'LineColor', 'SolidColor' } ) do
				if Meter:GetOption(Option, '') ~= '' then
					local Colors = ParseColorCode(Meter:GetOption(Option))
					Ai = Colors[4]
					UpdateFunction = function(A)
						SKIN:Bang('!SetOption', MeterName, Option, Colors[1]..','..Colors[2]..','..Colors[3]..','..A)
					end
					break
				end
			end
		end
		return Ai, UpdateFunction
	end

	Fade = function(Meters, Target, VariableName, Steps)
		Start('Fade', Meters, Target, 'To', VariableName, Steps)
	end

	FadeIn = function(Meters, VariableName, Steps)
		Start('Fade', Meters, 255, 'To', VariableName, Steps)
	end

	FadeOut = function(Meters, VariableName, Steps)
		Start('Fade', Meters, 0, 'To', VariableName, Steps)
	end

	FadeToggle = function(Meters, Modifier, Target, VariableName, Steps)
		Modifier = Modifier and Modifier or 0
		Target = Target and Target or 255
		Start('Fade', Meters, Target, Modifier, VariableName, Steps)
	end

	if ProfileFunctions then
		ProfileFunctions['Fade']       = Fade
		ProfileFunctions['FadeIn']     = FadeIn
		ProfileFunctions['FadeOut']    = FadeOut
		ProfileFunctions['FadeToggle'] = FadeToggle
	end
end

-----------------------------------------------------------------------
-- HELPER FUNCTIONS

function ParseColorCode(String)
	local Colors = {}

	for a in string.gmatch(String, '[%a%d]+') do
		table.insert(Colors, a)
	end

	if #Colors == 1 then
		local Hex = table.remove(Colors, 1)
		for a in string.gmatch(Hex, '[%a%d][%a%d]') do
			a = tonumber(a, 16)
			table.insert(Colors, a)
		end
	else
		for i,v in ipairs(Colors) do
			v = tonumber(v)
		end
	end

	if #Colors == 3 then
		table.insert(Colors, 255)
	end

	return Colors
end

--by Kaelri