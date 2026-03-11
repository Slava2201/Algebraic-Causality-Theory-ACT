# ACT Simulation Engine

## Overview
This repository contains the numerical implementation of the **Algebraic Causality Theory (ACT)**. The project focuses on simulating a discrete causal network of chronons and tetrahedra to study the emergence of gauge fields and dark matter density from the Dirac operator spectrum.

## Core Features
*   **Octant-based Graph Representation**: Efficient storage of chronon states and gauge links.
*   **Dirac Operator Construction**: Sparse matrix implementation of $D_\Gamma$ on a 4D simplicial complex.
*   **Parallel Action Computation**: CUDA-accelerated kernels for tetrahedral invariant $W$ calculations.
*   **Cosmological Pipeline**: Tools to bridge microscopic parameters ($\kappa, J, \beta_G$) with macroscopic observables (CMB, BAO).

## Quick Start
### Prerequisites
*   C++17 compatible compiler (GCC/Clang)
*   Eigen3 Library (Linear Algebra)
*   CUDA Toolkit (for GPU acceleration)
*   CMake (build system)

### Build Instructions

mkdir build && cd build
cmake ..
make -j4


## Project Structure (Simplified)
*   `src/act_core.hpp` — Fundamental data structures (Vertex, Edge, Tetrahedron).
*   `src/physics.hpp`  — Physics logic: Dirac operator and ACT Action.
*   `src/main.cpp`     — Entry point for simulations.

## References
For theoretical background, see the comprehensive preprint in the `docs/` folder (54 pages of formalism and proofs).


## License
MIT License
