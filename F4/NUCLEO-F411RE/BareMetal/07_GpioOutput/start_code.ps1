#$loc = "Home"
$loc = "Work"

if ($loc -eq "Home") {
	#Windows build tools
	$Env:PATH += ";d:\tools\STM32\xpack-windows-build-tools-4.4.1-3\bin\"
	#stm32CLI
	$Env:PATH += ";c:\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.cubeprogrammer.win32_2.2.400.202601091506\tools\bin\"
	#openocd
	$Env:PATH += ";d:\tools\STM32\xpack-openocd-0.12.0-7\bin\"
	#ST-LINK_gdbserver
	$Env:PATH += ";c:\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.stlink-gdb-server.win32_2.2.400.202601091506\tools\bin\"
	#Arm GNU toolchain
    $Env:PATH += ";d:\tools\STM32\arm-gnu-toolchain-15.2.rel1\bin\"

	Set-Location -Path "d:\Docs\repos\stm32\F4\NUCLEO-F411RE\BareMetal\07_GpioOutput\"
}
elseif ($loc -eq "Work") {
	#Windows build tools
	$Env:PATH += ";d:\tools\xpack-windows-build-tools-4.4.1-3\bin\"
	#stm32CLI
	$Env:PATH += ";c:\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.cubeprogrammer.win32_2.2.400.202601091506\tools\bin\"
	#openocd
	$Env:PATH += ";d:\tools\xpack-openocd-0.12.0-7\bin\"
	#ST-LINK_gdbserver
	$Env:PATH += ";c:\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.stlink-gdb-server.win32_2.2.400.202601091506\tools\bin\"
	#Arm GNU toolchain
	$Env:PATH += ";d:\tools\arm-gnu-toolchain-15.2.rel1-mingw-w64-x86_64-arm-none-eabi\bin\"

	Set-Location -Path "c:\Users\chuwi\STM32CubeIDE\F4\NUCLEO-F411RE\BareMetal\07_GpioOutput\"
}
else {
	Write-Output "Fail"
}

code .
