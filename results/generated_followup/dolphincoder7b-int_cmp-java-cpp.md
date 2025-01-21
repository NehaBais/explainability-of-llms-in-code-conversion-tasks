The error occurs because the `std` namespace is not defined when using C++. To fix this, we need to include the `<iostream>` header file that defines the standard input/output functions like `cin` and `cout`. By including this header file, we gain access to the `std::cout` and `std::cin` objects.

Here's the corrected code:
```cpp
#include <iostream>  // Include stdio.h for cin and cout

int main() {
  int nbr1, nbr2;            // Declare variables
  std::cin  >> nbr1  >> nbr2;  // Read input

  if (nbr1 < nbr2)
    std::cout << nbr1 << " is less than " << nbr2 << "\n";

  if (nbr1 > nbr2)
    std::cout << nbr1 << " is greater than " << nbr2 << "\n";

  if (nbr1 == nbr2)
    std::cout << nbr1 << " is equal to " << nbr2 << "\n";

  return 0;  // Exit successfully
}
```
