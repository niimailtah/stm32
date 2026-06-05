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

Set-Location -Path "c:\Users\chuwi\STM32CubeIDE\F4\NucleoF411RE\BareMetal\07_GpioOutput\"
code .
