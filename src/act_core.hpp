%%writefile act_core.hpp
#ifndef ACT_CORE_HPP
#define ACT_CORE_HPP

#include <vector>
#include <complex>

namespace act {

using Complex = std::complex<double>;

struct Vertex {
    int id;
    int octant;
    Complex tau[32];
    Complex psi[4];
    std::vector<int> tetrahedra;
};

struct Edge {
    int id;
    int v1, v2;
};

struct Tetrahedron {
    int id;
    int vertices[4];
    double W;
};

struct Graph {
    std::vector<Vertex> vertices;
    std::vector<Edge> edges;
    std::vector<Tetrahedron> tetrahedra;
};

} // namespace act

#endif // ACT_CORE_HPP






# 1. Компилируем наш код в исполняемый файл 'act_engine'
!g++ main.cpp -o act_engine

# 2. Запускаем скомпилированную программу
!./act_engine




