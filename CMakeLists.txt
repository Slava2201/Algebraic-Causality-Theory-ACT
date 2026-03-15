cmake_minimum_required(VERSION 3.10)
project(ACT_Engine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(act_engine src/main.cpp)




include_directories(${CMAKE_SOURCE_DIR}/eigen_src)
include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(act_engine 
    src/main.cpp 
    src/act_core.hpp 
    src/physics.hpp 
    src/generator.hpp 
    src/simulation.hpp
)


# Если у тебя будут другие .cpp файлы, добавляй их сюда:
# target_sources(act_engine PRIVATE src/physics.cpp src/simulation.cpp)

