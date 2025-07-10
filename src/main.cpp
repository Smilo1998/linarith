#include "vector.h"
#include <iostream>

int main() {
    Vector v(3);
    v.set(0, 1.1);
    v.set(1, 2.0);
    v.set(2, 5.6);

    v.print();

    double vector_norm = v.norm();
    
    std::cout << "Norm is: " << vector_norm << '\n';


    return 0;
}
