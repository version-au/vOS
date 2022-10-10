[Variables]

;CPU Motherboard's sensors

[HWiNFO-MOBO-CPU-Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO2#

[HWiNFO-MOBO-CPU-FREQ]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO1#

[HWiNFO-MOBO-CPU-AMPS]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO4#

[HWiNFO-MOBO-CPU-VCORE]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO3#

[HWiNFO-MOBO-CPU-WATT]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO15#

;-----------------------GPU--------------------------

[HWiNFO-GPU0-Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO13#

;[HWiNFO-GPU0-LOAD]
;Measure=Registry
;RegHKey=HKEY_CURRENT_USER
;RegKey=SOFTWARE\HWiNFO64\VSB
;RegValue=#HWINFO14#
;MinValue=0
;MaxValue=100

[HWiNFO-GPU0-AMPS]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO16#

[HWiNFO-GPU0-WATTS]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO17#

[HWiNFO-GPU0-CLOCK]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO18#

[HWiNFO-GPU0-MCLOCK]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO19#

[HWiNFO-GPU0-MEM]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO20#

;-----------------------FANS--------------------------
;CHA1
[HWiNFO-FANS-CHA1]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO5#
MinValue=0
MaxValue=#FAN1#

;CHA2
[HWiNFO-FANS-CHA2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO7#
MinValue=0
MaxValue=#FAN2#

;CPU
[HWiNFO-FANS-CPU]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO6#
MinValue=0
MaxValue=#FAN3#

;AIO
[HWiNFO-FANS-AIO]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO9#
MinValue=0
MaxValue=#FAN5#

;GPU0
[HWiNFO-FANS-GPU]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO8#
MinValue=0
MaxValue=#FAN4#

;-----------------------RAM--------------------------
;RAM
[HWiNFO-RAM0-TEMP]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO9#

[HWiNFO-RAM1-TEMP]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO10#

[HWiNFO-RAM2-TEMP]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO11#

[HWiNFO-RAM3-TEMP]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO12#

;-----------------------NET--------------------------
;NET
[HWiNFO-NET-DOWN]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO21#

[HWiNFO-NET-UP]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO22#

;-----------------------FPS--------------------------
[HWiNFO-FPS]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HWINFO23#