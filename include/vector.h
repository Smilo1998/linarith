#ifndef VECTOR_H
#define VECTOR_H

#include <cstdint>
#include <vector>

using Index = std::uint64_t;
using Size = std::uint64_t;

/**
 * @brief A simple vector class for linear algebra operations.
 */
class Vector {
public:
    /**
     * @brief Constructs a vector of the given size with all values initialized to zero.
     * @param size The number of elements in the vector.
     */
    Vector(Size size);

    /**
     * @brief Sets the value at a specific index.
     * @param index The index of the element.
     * @param value The value to set.
     */
    void set(Index index, double value);

     /**
     * @brief Gets the value at a specific index.
     * @param index The index of the element.
     * @return The value at the given index.
     */
    double get(Index index) const;

     /**
     * @brief Returns the number of elements in the vector.
     * @return Size of the vector.
     */
    Size size() const;

    /**
     *  @brief Returns the euclidean norm of a vector
     *  @return the norm as a double
     */
    double norm() const;

    /**
     * @brief Calculates the dot product between two vectors
     * @return The dot product as a double
     */
    double dot(const Vector& other) const;

    /**
     * @brief Performs a vector addition between two vectors
     * @param Another vector to add
     * @return A new resulting vector of the addition
     */
    Vector add(const Vector& other) const;

    /**
     * @brief Performs a vector subtraction between two vectors
     * @param Another vector to subtract
     * @return A new resulting vector of the subtraction
     */
    Vector subtract(const Vector& other) const;

    /**
     * @brief Scales a vector by a given scalar
     * @param A scalar as a double
     * @return A new scaled vector
     */
    Vector scale(double scalar) const;
    
    /**
     * @brief Calculates angle between two vectors
     * @param Vector to calculate angle with
     * @return Angle between vectors in radians
     */
    double angleBetween(const Vector& other) const;

    /**
     * @brief Calculates angle between two vectors
     * @param Vector to calculate angle with
     * @return Angle between vectors in degrees
     */
    double angleBetweenDegrees(const Vector& other) const;

    /**
     * @brief Determines if two vectors are orthogonal using the dot product.
     * @param other The other vector.
     * @return True if the vectors are orthogonal, false otherwise.
     */
    bool isOrthogonal(const Vector& other) const;

    /**
     * @brief Prints the vector to the console.
     */
    void print() const;


private:
    std::vector<double> data;
};

#endif
