#include <iostream>

int main()
{

    int student = 20;

    // student = student + 1;
    // student += 1;
    student++;

    // student = student - 1;
    // student -=1;
    student--;

    // student = student * 2;
    student *= 2;

    // student = student / 2;
    student /= 2;

    int remainder = student % 3;

    std::cout << student << std::endl;
    std::cout << "remainder: " << remainder;

    return 0;
}

/*
| Precedence | Operators     | Description              | Associativity |
| ---------- | ------------- | ------------------------ | ------------- |
| 1️⃣        | `()`          | **Parentheses**          | Left to right |
| 2️⃣        | `*`, `/`, `%` | Multiply, Divide, Modulo | Left to right |
| 3️⃣        | `+`, `-`      | Add, Subtract            | Left to right |

*/