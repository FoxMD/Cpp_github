#include <iostream>
#include <cstdlib>

#include "greeting.hpp"
#include "integer.hpp"

int main()
{
    auto integers = {1, 2, 3, 4, 5};
    std::cout << sum_integers(integers) << std::endl;
    say_hello();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}