#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> initialize_map(const int& width, const int& height)
{
    return std::vector<std::string> (width, ".");
}

void print_map(const std::vector<std::string>& gamemap)
{
    typedef std::vector<std::string>::size_type vec_str;
    for(vec_str i = 0; i != gamemap.size(); i++) {
        std::cout << gamemap[i] << std::endl;
    }
}
