#ifndef DEFINE_animal_h
#define DEFINE_animal_h

#include <vector>
#include <random>
#include <iostream>

// animal.h
// jeff tecca, 2015-06-18

struct animal {
    int x;
    int y;
    int energy;
};

std::vector<animal> initialize_animals(const int&);
animal new_animal();
void print_animal(const animal&);
void test_random();

#endif
