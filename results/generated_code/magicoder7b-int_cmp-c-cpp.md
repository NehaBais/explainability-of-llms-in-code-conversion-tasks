 The given C code can be directly converted into C++ as the language standard libraries remain same. Here's your requested conversion:
```cpp
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (a < b)
        std::cout << a << " is less than " << b << '\n';

    if (a == b)
        std::cout << a << " is equal to " << b << '\n';

    if (a > b)
        std::cout << a << " is greater than " << b << '\n';
  
    return 0;
}
```
