cmake_minimum_required(VERSION 3.15)

project(calc VERSION 0.0.1)

add_library(
    # calculator STATIC
    calculator SHARED
    calculator.h
    calculator.cpp
)

add_executable(
    calc
    main.cpp
)

target_link_libraries(
    calc
    PRIVATE calculator
)
