%%writefile physics.hpp
#ifndef PHYSICS_HPP
#define PHYSICS_HPP

#include "act_core.hpp"
#include <cmath>

namespace act {

/**
 * @brief Вычисляет локальный вклад в действие для тетраэдра
 * S_geom = sum(W_i * det(U_ij))
 */
double calculate_local_action(const Tetrahedron& tet, const Graph& G) {
    // Пока возвращаем упрощенный инвариант, 
    // позже сюда добавим тензорную кривизну
    return tet.W * 0.5; 
}

/**
 * @brief Пример функции для оценки состояния фермиона
 */
double estimate_psi_density(const Vertex& v) {
    double density = 0;
    for(int i = 0; i < 4; ++i) {
        density += std::norm(v.psi[i]);
    }
    return density;
}

} // namespace act

#endif // PHYSICS_HPP



%%writefile main.cpp
#include <iostream>
#include <complex>
#include "act_core.hpp"
#include "physics.hpp"

int main() {
    act::Graph G;
    
    // Создаем вершину
    act::Vertex v1;
    v1.id = 0;
    
    // Задаем начальное состояние фермиона (пусть будет 0.5 + 0.5i)
    for(int i = 0; i < 4; ++i) {
        v1.psi[i] = act::Complex(0.5, 0.5);
    }
    
    G.vertices.push_back(v1);

    // Считаем плотность через нашу функцию из physics.hpp
    double density = act::estimate_psi_density(G.vertices[0]);

    std::cout << "--- ACT Physics Check ---" << std::endl;
    std::cout << "Fermion density at Vertex 0: " << density << std::endl;
    
    if (density > 0) {
        std::cout << "Status: Physical field detected. )" << std::endl;
    }
    
    return 0;
}
