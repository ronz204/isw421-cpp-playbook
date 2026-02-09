cmake_minimum_required(VERSION 4.2.2)

# Project name and version
project(isw421-playbook VERSION 1.0.0 LANGUAGES CXX)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories for each layer
add_subdirectory(source)
add_subdirectory(apps)
