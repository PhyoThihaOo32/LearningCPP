#include <iostream>
#include <cmath>

int main()
{

    double x = 3;
    double y = 4;
    double max, min;

    max = std::max(x, y);
    min = std::min(x, y);
    double power = pow(2, 4);
    int root = sqrt(16);
    int absolute = abs(-3);

    std::cout << "maximum number is: " << max << std::endl;
    std::cout << "minimum number is: " << min << std::endl;
    std::cout << "2 power of 4 is: " << power << std::endl;
    std::cout << "square root of 16: " << root << std::endl;
    std::cout << "absolute value of -3 is: " << absolute << std::endl;

    return 0;
}