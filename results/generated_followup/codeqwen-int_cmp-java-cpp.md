The error message states that "use of undeclared identifier 'If'". This is because C++ doesn't recognize `If` as a keyword, instead it uses `if`.

The fix is to replace all instances of `If` with `if`.

Here's the corrected code:
```cpp
#include <iostream>

int main() {
  int nbr1, nbr2;

  std::cout << "Enter First integer: ";
  std::cin >> nbr1;

  std::cout << "Enter Second integer: ";
  std::cin >> nbr2;

  if (nbr1 < nbr2)
    std::cout << nbr1 << " Is less than " << nbr2 << std::endl;

  if(nbr1 > nbr2) std::cout << nbr1 << " Is greater than " << nbr2 << std::endl;

  if(nbr1 == nbr2) std::cout << nbr1 << " Is equal to " << nbr2 << std::endl;

  return 0;
}
```
