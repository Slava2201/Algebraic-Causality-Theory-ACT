cmake_minimum_required(VERSION 3.10)
project(ACT_Simulation_Engine)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/eigen_src)
include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(act_engine 
    src/main.cpp 
    src/act_core.hpp 
    src/physics.hpp 
    src/generator.hpp 
    src/simulation.hpp
)
