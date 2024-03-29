#include "vector_operations.h"
#include <cmath>
#include <fstream> // Include the header for file input/output
#include <iostream> // Include the header for standard input/output

// Function to calculate the Euclidean distance between two points
double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    for (size_t i = 0; i < v1.size(); ++i) {
        double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

// Function to calculate distances between points and populate the distances vector
std::vector<std::pair<std::pair<unsigned long long, unsigned long long>, double>> calculate_distances() {
    std::vector<std::pair<std::pair<unsigned long long, unsigned long long>, double>> distances;

    // Read vectors from file vector.txt and calculate distances
    std::ifstream infile("vectors.txt");
    if (!infile.is_open()) {
        std::cerr << "Error opening file vectors.txt" << std::endl; // Use cerr for error messages
        return distances;
    }

    std::vector<std::vector<double>> vectors;
    std::vector<double> vector;
    double num;
    while (infile >> num) {
        vector.push_back(num);
        if (vector.size() == 2) { // Assuming each vector has 2 coordinates
            vectors.push_back(vector);
            vector.clear();
        }
    }
    infile.close();

    // Calculate distances between all pairs of vectors
    for (size_t i = 0; i < vectors.size(); ++i) {
        for (size_t j = i + 1; j < vectors.size(); ++j) {
            double distance = euclideanDistance(vectors[i], vectors[j]);
            distances.push_back({{i+1, j+1}, distance}); // Assuming vectors are 1-indexed
        }
    }

    return distances;
}
