#include "vector.h"
#include <iostream>

int main() {
    Vector v(3);
    v.set(0, 2);
    v.set(1, -1);
    v.set(2, 4);

    Vector u(3);
    u.set(0, 2);
    u.set(1, -1);
    u.set(2, 4);

    Vector subtracted = v.subtract(u);
    subtracted.print();

    Vector scaled = v.scale(3);
    scaled.print(); // Forventet output: [6, -3, 12]

    return 0;
}

