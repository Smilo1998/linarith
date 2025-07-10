#include "vector.h"
#include <iostream>

int main() {
    Vector v1(3);
    v1.set(0, 2.0);
    v1.set(1, -1.0);
    v1.set(2, 0.0);

    Vector v2(3);
    v2.set(0, 1.0);
    v2.set(1, 2.0);
    v2.set(2, 0.0);

    std::cout << "v1 = ";
    v1.print();

    std::cout << "v2 = ";
    v2.print();

    std::cout << "Dot product: " << v1.dot(v2) << "\n";
    std::cout << "Are orthogonal? " << (v1.isOrthogonal(v2) ? "Yes" : "No") << "\n";

    Vector a(3);
    a.set(0, 1);
    a.set(1, 2);
    a.set(2, 3);

    Vector b(3);
    b.set(0, 4);
    b.set(1, 5);
    b.set(2, 6);

    Vector c = a.add(b);  // Return by value
    c.print();            // [5, 7, 9]

    return 0;
}

