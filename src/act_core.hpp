%%writefile src/act_core.hpp
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

    // Добавим конструктор по умолчанию для стабильности
    Vertex() : id(0), octant(0) {
        for(int i=0; i<32; ++i) tau[i] = Complex(0,0);
        for(int i=0; i<4; ++i) psi[i] = Complex(0,0);
    }
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
};

} // namespace act

#endif
