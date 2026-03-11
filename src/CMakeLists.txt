%%writefile CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(ACT_Simulation_Engine)

set(CMAKE_CXX_STANDARD 17)

# Добавляем исполняемый файл и перечисляем все нужные файлы
add_executable(act_engine main.cpp act_core.hpp physics.hpp)



# 1. Создаем папку для сборки
!mkdir -p build
# 2. Конфигурируем проект через CMake
!cd build && cmake ..
# 3. Компилируем
!cd build && make
# 4. Запускаем готовый результат
!./build/act_engine
