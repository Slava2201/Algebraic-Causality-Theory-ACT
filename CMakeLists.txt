%%writefile CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(ACT_Simulation_Engine)

set(CMAKE_CXX_STANDARD 17)

# Указываем путь к Eigen
include_directories(${CMAKE_SOURCE_DIR}/eigen_src)
# Указываем, где искать наши .hpp файлы
include_directories(${CMAKE_SOURCE_DIR}/src)

# Собираем из файлов в папке src и основного main.cpp
# ВНИМАНИЕ: проверь, где у тебя лежит main.cpp - в корне или в src?
add_executable(act_engine src/main.cpp src/act_core.hpp src/physics.hpp src/generator.hpp src/simulation.hpp)
