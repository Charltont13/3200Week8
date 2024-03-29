#include <iostream>
#include <vector>
#include <algorithm>
#include "vector_operations.h"

int main() {
    std::vector<std::pair<std::pair<unsigned long long, unsigned long long>, double>> distances = calculate_distances();
    
    std::sort(distances.begin(), distances.end(), [](const auto& a, const auto& b) {
        return a.second < b.second; 
    });

    for (const auto& pair : distances) 
    {
        std::cout << "Pair: (" << pair.first.first << ", " << pair.first.second << "), Distance: " << pair.second << std::endl;
    }

    return 0;
}
