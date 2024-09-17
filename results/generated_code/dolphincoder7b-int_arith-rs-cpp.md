### Code (C++):
```cpp
#include <iostream>
#include <cmath>  // for floor()

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << "sum:               ";
    std::cout << a + b << "\n";
    
    std::cout << "difference:        ";
    std::cout << a - b << "\n";
    
    std::cout << "product:           ";
    std::cout << a * b << "\n";

    std::cout << "integer quotient:  ";
    std::cout << static_cast<int>(floor(static_cast<double>(a) / static_cast<double>(b))) << "\n";  // truncates towards zero
    
    std::cout << "remainder:         ";
    std::cout << a % b << "\n";      // same sign as first operand

    return 0;
}
```
