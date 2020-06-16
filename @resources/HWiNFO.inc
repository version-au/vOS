[Variables]

;CPU Motherboard's sensors

; CPU Temperature Motherboard's sensor "HWiNFO-MOBO-CPU-Temp"
HWiNFO-MOBO-CPU-Temp-SensorId=0xf7067980
HWiNFO-MOBO-CPU-Temp-SensorInstance=0x0
HWiNFO-MOBO-CPU-Temp-EntryId=0x1000007
;HWiNFOCPUAvgClock
HWiNFO-CPU0-AvgClock-SensorId=0xf0000300
HWiNFO-CPU0-AvgClock-SensorInstance=0x0
HWiNFO-CPU0-AvgClock-EntryId=0x6000022
;HWiNFOCPUCurrent
HWiNFO-CPU0-CPUCurrent-SensorId=0xf0000501
HWiNFO-CPU0-CPUCurrent-SensorInstance=0x0
HWiNFO-CPU0-CPUCurrent-EntryId=0x4000000
;HWiNFOCPUVcore
HWiNFO-CPU0-CPUVcore-SensorId=0xf7067980
HWiNFO-CPU0-CPUVcore-SensorInstance=0x0
HWiNFO-CPU0-CPUVcore-EntryId=0x2000000
;HWiNFOCPUFCLK
HWiNFO-CPU0-CPUFCLK-SensorId=0xf0000501
HWiNFO-CPU0-CPUFCLK-SensorInstance=0x0
HWiNFO-CPU0-CPUFCLK-EntryId=0x6000000

;GPU0
; GPU0 Temperature sensor "HWiNFO-GPU0-Temp"
HWiNFO-GPU0-Temp-SensorId=0xe0002000
HWiNFO-GPU0-Temp-SensorInstance=0x0
HWiNFO-GPU0-Temp-EntryId=0x1000000
; GPU0 Fan rpm sensor "HWiNFO-GPU0-FanRPM"
HWiNFO-GPU0-FanRPM-SensorId=0xe0002000
HWiNFO-GPU0-FanRPM-SensorInstance=0x0
HWiNFO-GPU0-FanRPM-EntryId=0x3000000
; GPU0 Core usage sensor "HWiNFO-GPU0-Usage"
HWiNFO-GPU0-Usage-SensorId=0xe0002000
HWiNFO-GPU0-Usage-SensorInstance=0x0
HWiNFO-GPU0-Usage-EntryId=0x7000000

; GPU0 Clock sensor "HWiNFO-GPU0-Clock"
HWiNFO-GPU0-Clock-SensorId=0xe0002000
HWiNFO-GPU0-Clock-SensorInstance=0x0
HWiNFO-GPU0-Clock-EntryId=0x6000000
; GPU0 Memory clock sensor "HWiNFO-GPU0-MemClock"
HWiNFO-GPU0-MemClock-SensorId=0xe0002000
HWiNFO-GPU0-MemClock-SensorInstance=0x0
HWiNFO-GPU0-MemClock-EntryId=0x6000004
; GPU0 Video clock sensor "HWiNFO-GPU0-VidClock"
HWiNFO-GPU0-VidClock-SensorId=0xe0002000
HWiNFO-GPU0-VidClock-SensorInstance=0x0
HWiNFO-GPU0-VidClock-EntryId=0x6000005

; GPU0 (Allocated) memory sensor "HWiNFO-GPU0-MemAlloc"
HWiNFO-GPU0-MemAlloc-SensorId=0xe0002000
HWiNFO-GPU0-MemAlloc-SensorInstance=0x0
HWiNFO-GPU0-MemAlloc-EntryId=0x80000fc
; GPU0 Memory usage percent "HWiNFO-GPU0-MemUsg"
HWiNFO-GPU0-MemUsg-SensorId=0xe0002000
HWiNFO-GPU0-MemUsg-SensorInstance=0x0
HWiNFO-GPU0-MemUsg-EntryId=0x7000008
; GPU0 VR Usage "HWiNFO-GPU0-VRuse"
HWiNFO-GPU0-VRuse-SensorId=0xe0002000
HWiNFO-GPU0-VRuse-SensorInstance=0x0
HWiNFO-GPU0-VRuse-EntryId=0x7000028

;FANS Skin
;CHA1
HWiNFO-FANS-CHA1-SensorId=0xf7067980
HWiNFO-FANS-CHA1-SensorInstance=0x0
HWiNFO-FANS-CHA1-EntryId=0x3000000
;CHA2
HWiNFO-FANS-CHA2-SensorId=0xf7067980
HWiNFO-FANS-CHA2-SensorInstance=0x0
HWiNFO-FANS-CHA2-EntryId=0x3000002
;CHA3
HWiNFO-FANS-CHA3-SensorId=0xf7067980
HWiNFO-FANS-CHA3-SensorInstance=0x0
HWiNFO-FANS-CHA3-EntryId=0x3000003
;CPU
HWiNFO-FANS-CPU-SensorId=0xf7067980
HWiNFO-FANS-CPU-SensorInstance=0x0
HWiNFO-FANS-CPU-EntryId=0x3000001
;GPU0
HWiNFO-FANS-GPU0-SensorId=0xe0002000
HWiNFO-FANS-GPU0-SensorInstance=0x0
HWiNFO-FANS-GPU0-EntryId=0x3000000
;RAM
HWiNFO-RAM0-TEMP-SensorId=0xf3000002
HWiNFO-RAM0-TEMP-SensorInstance=0x0
HWiNFO-RAM0-TEMP-EntryId=0x1000000
HWiNFO-MOBO-CPU-Fan-SensorId=0xf7067980
HWiNFO-MOBO-CPU-Fan-SensorInstance=0x0
HWiNFO-MOBO-CPU-Fan-EntryId=0x3000001


[HWiNFO-Config-CPU]
HWiNFO-MOBO-CPU-Fan=CPU Fan Motherboard's sensor (RPM)
HWiNFO-MOBO-CPU-Temp=CPU Temperature Motherboard's sensor (degrees)
HWiNFO-CPU0-AvgClock=Average Clock Speed of CPU
HWiNFO-CPU0-CPUCurrent=Current of CPU in AMPS
HWiNFO-CPU0-CPUVcore=VCORE voltage
HWiNFO-CPU0-CPUFCLK=FCLK MHz

[HWiNFO-Config-GPU0]
HWiNFO-GPU0-Usage=GPU Core load (%)
HWiNFO-GPU0-Temp=GPU Temperature (degrees)
HWiNFO-GPU0-FanRPM=GPU Fan (RPM)
HWiNFO-GPU0-MemAlloc=GPU Memory Allocated or Dedicated for AMD GPUs (MB)
HWiNFO-GPU0-MemUsg=GPU Memory Usage (%)
HWiNFO-GPU0-Clock=GPU Clock (MHz)
HWiNFO-GPU0-MemClock=GPU Memory Clock (MHz)
HWiNFO-GPU0-VidClock=GPU Video Clock (MHz)
HWiNFO-GPU0-VRuse=VR Usage

[HWiNFO-Config-FANS]
HWiNFO-FANS-CHA1=Chassis 1 Fan
HWiNFO-FANS-CHA2=Chassis 2 Fan
HWiNFO-FANS-CHA3=Chassis 3 Fan
HWiNFO-FANS-CPU=CPU Fan
HWiNFO-FANS-GPU0=GPU0 Fan (1st GPU)


[HWiNFO-Config-RAM]
HWiNFO-RAM0-TEMP=Ram 1 Temp
