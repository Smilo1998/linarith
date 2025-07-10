# Linarith – A Minimal Linear Algebra Library in Modern C++

**Linarith** is a lightweight linear algebra library written from scratch in C++.  
It currently supports core vector operations and is being actively developed as part of a learning journey in numerical software, modern C++ design, and performance-aware programming.

---

## 🚀 Features (so far)

- Custom `Vector` class with:
  - `set(index, value)` and `get(index)` access
  - `size()` method
  - `norm()` – Euclidean length
  - `dot(const Vector&)` – dot product
  - `isOrthogonal(const Vector&)` – check if vectors are perpendicular
  - `add(const Vector&)` – element-wise addition
  - `subtract(const Vector&)` – element-wise subtraction
  - `scale(double)` – scalar multiplication
  - `print()` – console-friendly output

---

## 🔧 Build Instructions

### Requirements:
- C++17 (or newer)
- `make` and `g++` (or any C++ compiler)

### How to build and run:

```bash
make         # Build the project
make run     # Compile and run main.cpp
make clean   # Remove build and binary files
```
