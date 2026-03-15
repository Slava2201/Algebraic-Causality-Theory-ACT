#ifndef ACT_CORE_HPP
#define ACT_CORE_HPP

#include <vector>
#include <complex>
#include <new>      // Обязательно!

namespace act {

using Complex = std::complex<double>;

struct Vertex {
    int id;
    int octant;
    Complex tau[32];
    Complex psi[4];
    std::vector<int> tetrahedra;

    Vertex() : id(0), octant(0) {
        for(int i=0; i<32; ++i) tau[i] = Complex(0,0);
        for(int i=0; i<4; ++i) psi[i] = Complex(0,0);
    }

    // Это исправит ошибку с вектором:
    Vertex(const Vertex& other) {
        id = other.id;
        octant = other.octant;
        for(int i=0; i<32; ++i) tau[i] = other.tau[i];
        for(int i=0; i<4; ++i) psi[i] = other.psi[i];
        tetrahedra = other.tetrahedra;
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
