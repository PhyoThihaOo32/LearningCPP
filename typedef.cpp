#include <iostream>
#include <vector>

// typedef lets you create a new name(alias) for an existing data type.

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

typedef unsigned int uint_t;
uint_t myAge = 10;

int main()
{

    text_t message = "Text Message";
    number_t age = 35;

    std::cout
        << message << '\n';
    std::cout
        << age << '\n';

    return 0;
}