#include <vector>
#include <string>
#include <iostream>
#include "base.h"
#include "animal.h"

// main.cpp
// jeff tecca, 2015-06-18

#define MAP_WIDTH 20
#define MAP_HEIGHT 20

int loop();

int main()
{
    return loop();
}

int loop()
{
    test_random();
    std::vector <std::vector <std::string> > gamemap = initialize_map(MAP_WIDTH, MAP_HEIGHT);
    print_map(gamemap);
    animal a = new_animal();
    print_animal(a);
    return 0;
}
