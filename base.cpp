#include <vector>
#include <string>
#include <iostream>

// base.cpp
// jeff tecca, 2015-06-18

void print_map(const std::vector<std::string>&);

std::vector <std::vector <std::string> > initialize_map(const int& width, const int& height)
{
    // std::vector<std::string> test(width, ".");
    // print_map(test);
    std::vector <std::vector <std::string> > gamemap(height, std::vector<std::string>(width, "."));
    return gamemap;
}

void print_map(const std::vector <std::vector <std::string> >& gamemap)
{
    typedef std::vector<std::string>::size_type vec_str;
    for(vec_str i = 0; i != gamemap.size(); ++i) {
        for(vec_str j = 0; j != gamemap[i].size(); ++j) {
            std::cout << gamemap[i][j];
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}
