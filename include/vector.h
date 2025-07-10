#ifndef VECTOR_H
#define VECTOR_H

#include <cstdint>
#include <vector>

using Index = std::uint64_t;
using Size = std::uint64_t;

class Vector {
public:
    Vector(Size size);
    void set(Index index, double value);
    double get(Index index) const;
    Size size() const;
    double norm() const;
    double dot(const Vector& other) const;
    Vector add(const Vector& other) const;
    Vector subtract(const Vector& other) const;
    Vector scale(double scalar) const;
    bool isOrthogonal(const Vector& other) const;
    void print() const;


private:
    std::vector<double> data;
};

#endif
