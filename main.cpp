#include "base.h"
#include <vector>
#include <string>

int loop()
{
    std::vector<std::string> map = initialize_map(20, 20);
    print_map(map);
    return 0;
}

int main()
{
    return loop();
}
