# Vector Distance Calculator
This program calculates pairwise distances between vectors read from a file and outputs the distances ordered by their closeness.

## Compilation: Compile the program using a C++ compiler.

g++ -std=c++14 -c main.cpp -o main.o
g++ -std=c++14 -c vector_operations.cpp -o vector_operations.o
g++ -std=c++14 -c unit_tests.cpp -o unit_tests.o
g++ -std=c++14 main.o vector_operations.o -o program -lm

## Run
./program
