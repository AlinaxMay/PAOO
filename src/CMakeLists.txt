cmake_minimum_required(VERSION 3.10)

# Project Name and Version
project(PAOO VERSION 1.0)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
set(SOURCES
    main.cpp
    Camin/camin.cpp
    Camera/camera.cpp
    Student/student.cpp
)

# Create the executable
add_executable(PAOO ${SOURCES})

# Include directories
target_include_directories(PAOO PRIVATE
    ${CMAKE_SOURCE_DIR}/Camin
    ${CMAKE_SOURCE_DIR}/Camera
    ${CMAKE_SOURCE_DIR}/Student
)
