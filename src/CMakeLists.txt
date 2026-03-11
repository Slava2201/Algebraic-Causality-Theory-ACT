%%writefile CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(ACT_Simulation_Engine)

set(CMAKE_CXX_STANDARD 17)

# Добавляем исполняемый файл и перечисляем все нужные файлы
add_executable(act_engine main.cpp act_core.hpp physics.hpp)
