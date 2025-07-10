#include "vector.h"
#include <iostream>

int main() {
    Vector v1({2.0, 4.0, 6.0});
    Vector v2({1.0, 2.0, 3.0});
    Vector v3({1.0, 0.0, 3.0});
    Vector v4({0.0, 0.0, 0.0});
    Vector v5({0.0, 0.0, 2.0});
    Vector v6({0.0, 0.0, 1.0});

    std::cout << std::boolalpha; // Vis 'true'/'false' i stedet for 1/0

    std::cout << "v1 og v2 er lineært afhængige: " << v1.isLineardependent(v2) << '\n';
    std::cout << "v1 og v3 er lineært afhængige: " << v1.isLineardependent(v3) << '\n';
    std::cout << "v4 og v1 er lineært afhængige: " << v4.isLineardependent(v1) << '\n';
    std::cout << "v5 og v6 er lineært afhængige: " << v5.isLineardependent(v6) << '\n';

    return 0;
}

