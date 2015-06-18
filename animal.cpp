#include "main.h"
#include <iostream>
#include <random>
#include <vector>

// animal.cpp
// jeff tecca, 2015-06-18

animal new_animal();

std::vector<animal> initialize_animals(const int& amount)
{
    return std::vector<animal>(amount, new_animal());
}

animal new_animal()
{
    animal a;
    // http://channel9.msdn.com/Events/GoingNative/2013/rand-Considered-Harmful
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> xdist(0, MAX_WIDTH);
    std::uniform_int_distribution<int> ydist(0, MAX_HEIGHT);
    std::uniform_int_distribution<int> endist(100, 200);
    a.x = xdist(gen);
    a.y = ydist(gen);
    a.energy = endist(gen);
    return a;
}

void print_animal(const animal& a)
{
    // debugging support for printing the internals of an animal struct
    std::cout << "Animal[X:" << a.x <<
        ",Y:" << a.y <<
        ",EN:" << a.energy <<
        "]" << std::endl;
}

void test_random()
{
    std::cout << std::rand() << std::endl;
}
