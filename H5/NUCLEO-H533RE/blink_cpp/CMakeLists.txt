cmake_minimum_required(VERSION 3.17)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_VERSION 1)

set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
#set(CMAKE_ASM_COMPILER arm-none-eabi-gcc)
set(CMAKE_AR arm-none-eabi-ar)
#set(CMAKE_OBJCOPY arm-none-eabi-objcopy)
#set(CMAKE_OBJDUMP arm-none-eabi-objdump)
#set(SIZE arm-none-eabi-size)
#set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

project(blink_cpp C CXX ASM)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

set(CMAKE_BUILD_TYPE "Debug")

# Add carnel name
set(MCPU cortex-m33)
 
# Uncomment for hardware floating point
#add_compile_definitions(ARM_MATH_CM4;ARM_MATH_MATRIX_CHECK;ARM_MATH_ROUNDING)
#add_compile_options(-mfloat-abi=hard -mfpu=fpv4-sp-d16)
#add_link_options(-mfloat-abi=hard -mfpu=fpv4-sp-d16)
 
# Uncomment for software floating point
add_compile_options(-mfloat-abi=soft)
 
add_compile_options(-mcpu=${MCPU} -mthumb -mthumb-interwork)
add_compile_options(-ffunction-sections -fdata-sections -fno-common -fmessage-length=0)
 
# Uncomment to mitigate c++17 absolute addresses warnings
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-register")
 
if ("${CMAKE_BUILD_TYPE}" STREQUAL "Release")
    message(STATUS "Maximum optimization for speed")
    add_compile_options(-Ofast)
elseif ("${CMAKE_BUILD_TYPE}" STREQUAL "RelWithDebInfo")
    message(STATUS "Maximum optimization for speed, debug info included")
    add_compile_options(-Ofast -g)
elseif ("${CMAKE_BUILD_TYPE}" STREQUAL "MinSizeRel")
    message(STATUS "Maximum optimization for size")
    add_compile_options(-Os)
else ()
    message(STATUS "Minimal optimization, debug info included")
    add_compile_options(-Og -g)
endif ()
 
# Add Include directories
include_directories(
        ${CMAKE_SOURCE_DIR}/inc
        )

# Add startup source
set(STARTUP_SOURCE "startup/startup_stm32h533retx.s")

# Add you source file
file(GLOB_RECURSE SOURCES
        "src/*.c"
        "src/*.cpp"
        ${STARTUP_SOURCE}
        )
 
# Add linker file
# set(LINKER_SCRIPT ${CMAKE_SOURCE_DIR}/STM32F411RETX_FLASH.ld)
set(LINKER_SCRIPT ${CMAKE_SOURCE_DIR}/STM32H533RETX_FLASH.ld)
 
# this options for C++
add_link_options(-specs=nano.specs -lstdc++)
add_link_options(-Wl,-gc-sections,--print-memory-usage,-Map=${PROJECT_BINARY_DIR}/${PROJECT_NAME}.map)
add_link_options(-mcpu=${MCPU} -mthumb -mthumb-interwork)
add_link_options(-T ${LINKER_SCRIPT})

add_executable(${PROJECT_NAME}.elf ${SOURCES} ${LINKER_SCRIPT})
