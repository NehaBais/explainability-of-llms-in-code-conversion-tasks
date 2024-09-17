```cpp
#include <iostream>

int main() {
    int n1, n2;
    std::cout << "enter number: ";
    std::cin >> n1;
    std::cout << "enter number: ";
    std::cin >> n2;

    if (n1 < n2) {
        std::cout << n1 << " less than " << n2 << std::endl;
    } else if (n1 == n2) {
        std::cout << n1 << " equal to " << n2 << std::endl;
    } else {
        std::cout << n1 << " greater than " << n2 << std::endl;
    }

    return 0;
}
```
