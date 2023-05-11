cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)
set(PICO_SDK_PATH "${PICO_SDK_PATH}")
set(PICO_BOARD pico CACHE STRING "Board type")

project(rp2040_74595_driver C CXX ASM)
add_library(rp2040_74595_driver STATIC src/rp2040_74595_driver.cpp)



target_include_directories(rp2040_74595_driver PRIVATE
    ${PICO_SDK_PATH}
)

pico_sdk_init()

target_include_directories(rp2040_74595_driver PUBLIC
    ./include
)

target_link_libraries(rp2040_74595_driver
        pico_stdlib
        hardware_gpio
        hardware_timer
        hardware_clocks)

##add_subdirectory(example)