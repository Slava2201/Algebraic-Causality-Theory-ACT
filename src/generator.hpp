%%writefile generator.hpp
#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include "act_core.hpp"
#include <iostream>

namespace act {

/**
 * @brief Создает минимальную ячейку пространства-времени
 */
void generate_simple_cell(Graph& G) {
    // Создаем 4 вершины (минимальный тетраэдр)
    for(int i = 0; i < 4; ++i) {
        Vertex v;
        v.id = i;
        v.octant = i % 8;
        // Инициализируем поле psi нулями
        for(int j = 0; j < 4; ++j) v.psi[j] = Complex(0,0);
        G.vertices.push_back(v);
    }

    // Соединяем их ребрами (все со всеми)
    int edge_id = 0;
    for(int i = 0; i < 4; ++i) {
        for(int j = i + 1; j < 4; ++j) {
            Edge e;
            e.id = edge_id++;
            e.v1 = i;
            e.v2 = j;
            e.U = Matrix33::Identity(); // В вакууме связи единичные
            G.edges.push_back(e);
        }
    }

    // Определяем сам тетраэдр
    Tetrahedron t;
    t.id = 0;
    for(int i = 0; i < 4; ++i) t.vertices[i] = i;
    t.W = 1.0; // Единичный объем
    G.tetrahedra.push_back(t);
    
    std::cout << "Space-time cell generated: 4 vertices, 6 edges, 1 tetrahedron." << std::endl;
}

} // namespace act

#endif // GENERATOR_HPP
