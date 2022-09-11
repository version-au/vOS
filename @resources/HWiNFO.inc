[Variables]

;CPU Motherboard's sensors

[HWiNFO-MOBO-CPU-Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw0



;GPU0

[HWiNFO-GPU0-Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw6


;FANS Skin
;CHA1
[HWiNFO-FANS-CHA1]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw1
MinValue=0
MaxValue=2000

;CHA2
[HWiNFO-FANS-CHA2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw3
MinValue=0
MaxValue=1500

;CPU
[HWiNFO-FANS-CPU]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw2
MinValue=0
MaxValue=2000

;GPU0
[HWiNFO-FANS-GPU]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw4
MinValue=0
MaxValue=2000

[HWiNFO-LOAD-GPU]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw7

;RAM
[HWiNFO-RAM0-TEMP]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw5
