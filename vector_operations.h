#ifndef VECTOR_OPERATIONS_H
#define VECTOR_OPERATIONS_H

#include <vector>
#include <cmath>
#include <cstddef>

std::vector<std::pair<std::pair<unsigned long long, unsigned long long>, double>> calculate_distances();
double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2);
double dotProduct(const std::vector<double>& v1, const std::vector<double>& v2);
double magnitude(const std::vector<double>& v);
double cosineDistance(const std::vector<double>& v1, const std::vector<double>& v2);

#endif // VECTOR_OPERATIONS_H
