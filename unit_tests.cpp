#include "vector_operations.h"
#include <iostream>
#include <cassert>

int main() {
    // Test dot product
    std::vector<double> v1 = {1.0, 2.0};
    std::vector<double> v2 = {3.0, 4.0};
    assert(dotProduct(v1, v2) == 11.0);

    // Test magnitude
    std::vector<double> v3 = {3.0, 4.0};
    assert(magnitude(v3) == 5.0);

    // Test cosine distance
    std::vector<double> v4 = {1.0, 0.0};
    std::vector<double> v5 = {0.0, 1.0};
    assert(cosineDistance(v4, v5) == 0.0);

    std::cout << "All tests passed successfully!" << std::endl;

    return 0;
}
