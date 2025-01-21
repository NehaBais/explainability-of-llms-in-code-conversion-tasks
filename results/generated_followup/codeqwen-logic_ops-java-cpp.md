Error: Undeclared identifier 'A'

Fix: Enclose 'A' within parentheses when passing it to the function `logic`. This is because in C++, if we directly pass a variable without parentheses, the compiler interprets it as a logical OR operation. 

Corrected code:
```cpp
#include <iostream>

void logic(bool A, bool B) {
  std::cout << "A AND B: " << (A && B) << std::endl;
  std::cout << "A OR B: " << (A || B) << std::endl;
  std::cout << "NOT A: " << (!A) << std::endl;
}

int main() {
  bool A = true, B = false;
  logic((bool)A, B);  // corrected the syntax here.
  return 0;
}
```
