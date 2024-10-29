## Answer

```
#include <iostream>
int main() {
    int a, b;
    if (!(std::cin >> a >> b)) {
        std::cerr << "could not read the numbers" << std::endl;
        return 1;
    }
    // test for less-than
    if (a < b)
        std::cout << a << " is less than " << b << std::endl;
    // test for equality
    if (a == b)
        std::cout << a << " is equal to " << b << std::endl;
    // test for greater-than
    if (a > b)
        std::cout << a << " is greater than " << b << std::endl;
}
```
