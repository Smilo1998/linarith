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



