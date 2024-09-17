Sure, here's the equivalent C++ code:

```cpp
#include <iostream>

int main() {
  unsigned char a = 105;
  unsigned char b = 91;

  std::cout << "a       = " << std::bitset<8>(a) << "\n";
  std::cout << "b       = " << std::bitset<8>(b) << "\n";
  std::cout << "a | b   = " << std::bitset<8>(a | b) << "\n";
  std::cout << "a & b   = " << std::bitset<8>(a & b) << "\n";
  std::cout << "a ^ b   = " << std::bitset<8>(a ^ b) << "\n";
  std::cout << "!a      = " << std::bitset<8>(~a) << "\n";
  std::cout << "a  << 3  = " << std::bitset<8>(a  << 3) << "\n";
  std::cout << "a  >> 3  = " << std::bitset<8>(a  >> 3) << "\n";

  return 0;
}
```

Note that you need to include `<bitset>` to use `std::bitset` in C++. You can find more information about `<bitset>` on [cppreference](https://en.cppreference.com/w/cpp/header/bitset).
