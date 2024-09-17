```cpp
#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a & b: " << (a & b) << std::endl;
  std::cout << "a | b: " << (a | b) << std::endl;
  std::cout << "a ^ b: " << (a ^ b) << std::endl;
  std::cout << "~a: " << (~a) << std::endl;
  std::cout << "a << b: " << (a << b) << std::endl; // left shift
  std::cout << "a >> b: " << (a >> b) << std::endl; // arithmetic right shift
  std::cout << "a >>> b: " << (a >>> b) << std::endl; // logical right shift
}
```

**Usage:**

```cpp
int main() {
  int a = 10, b = 5;
  bitwise(a, b);
  return 0;
}
```

**Output:**

```
a & b: 4
a | b: 15
a ^ b: 11
~a: -11
a << b: 40
a >> b: 2
a >>> b: 2
```
