```cpp
#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if(argc != 3) {
        std::cerr << "Usage: " << argv[0] << " num1 num2" << std::endl;
        return EXIT_FAILURE;
    }

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);

    std::cout << "sum:              " << a + b << std::endl;
    std::cout << "difference:       " << a - b << std::endl;
    std::cout << "product:          " << a * b << std::endl;
    std::cout << "integer quotient: " << a / b << " (truncates towards zero)" << std::endl; 
    std::cout << "remainder:        " << a % b << " (same sign as first operand if they are different)" << std::endl;

    return EXIT_SUCCESS;
}
```
