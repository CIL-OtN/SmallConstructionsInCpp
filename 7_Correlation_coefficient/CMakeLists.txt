cmake_minimum_required(VERSION 3.12)

set(PROJECT "7_Correlation_coefficient")

project("${PROJECT}_Project" VERSION 1.2.3 LANGUAGES CXX)

# Global CMake variables are set here
set(CMAKE_CXX_STANDARD          20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        ON)

# Project/Library Names
set(LIBRARY_NAME    "${PROJECT}_MyLib")
set(MAIN            "${PROJECT}_Executable")

# Add libraries
add_subdirectory("${PROJECT_SOURCE_DIR}/src/")

# Add executables
add_subdirectory("${PROJECT_SOURCE_DIR}/app/")
