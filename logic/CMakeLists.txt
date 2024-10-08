cmake_minimum_required(VERSION 3.10)

# Set the project name
project(scheduling_algs)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find all the .cpp files in the current directory
file(GLOB SOURCES "*.cpp")

# Create an executable with all the .cpp files
add_executable(scheduling_algs ${SOURCES})
