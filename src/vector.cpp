#include <cstddef>
#include <cstdint>
#include <iostream>
#include <cmath>
#include "vector.h"


using Index = std::uint64_t;
using Size = std::uint64_t;

Vector::Vector(Size size) : data(size, 0.0) {}

void Vector::set(Index index, double value) {
    data[index] = value;
}

double Vector::get(Index index) const {
    return data[index];
}

Size Vector::size() const {
    return data.size();
}

double Vector::norm() const {
    double sum{};
    for(std::size_t i = 0; i < data.size(); i++) {
        sum += data[i] * data[i];
    }
    return std::sqrt(sum);
}

void Vector::print() const {
    std::cout << "[";
    for (std::size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i];
        if (i != data.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
}

double Vector::dot(const Vector& other) const {
    if (data.size() != other.data.size()) {
        throw std::invalid_argument("Vectors not the same size");
    }

    double sum{};
    for (std::size_t i = 0; i < data.size(); i++) {
        sum += data[i] * other.data[i];
    }
    return sum;
}

Vector Vector::add(const Vector& other) const {
    if (data.size() != other.data.size()) {
        throw std::invalid_argument("Vectors not the same size");
    }
    Vector result(data.size());
    for(std::size_t i = 0; i < data.size(); i++) {
        result.set(i, data[i] + other.data[i]);
    }
    return result;
}

Vector Vector::subtract(const Vector& other) const {
    if (data.size() != other.data.size()) {
        throw std::invalid_argument("Vectors not the same size");
    }
    Vector result(data.size());
    for(std::size_t i = 0; i < data.size(); i++) {
        result.set(i, data[i] - other.data[i]);
    }
    return result;
}

Vector Vector::scale(double scalar) const {
    Vector result(data.size());
    for(std::size_t i = 0; i < data.size(); i++) {
        result.set(i, data[i] * scalar);
    }
    return result;
}


bool Vector::isOrthogonal(const Vector& other) const {
    return std::abs(dot(other)) < 1e-10; // For handling small round off errors
}



