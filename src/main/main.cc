#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string str = "a[1[{2}]d][(w){f}]s";
    std::cout <<solution.CheckBrackets(str)<< std::endl;

    return EXIT_SUCCESS;
}