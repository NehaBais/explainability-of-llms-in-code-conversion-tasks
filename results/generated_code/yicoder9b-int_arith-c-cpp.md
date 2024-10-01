Sure! Here's the equivalent code in C++:

Note that integer division in C++ also truncates towards zero, like it does in C.
The modulus operation gives a result with the same sign as the first operand. 

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc < 3) {
    cout << "Not enough arguments" << endl;
    return 1;
  }

  char* endptr;
  long a = strtol(argv[argc - 2], &endptr, 10);
  if (*endptr != '\0' || a < INT_MIN || a > INT_MAX) {
    cout << "Invalid integer value" << endl;
    return 1;
  }

  long b = strtol(argv[argc - 1], &endptr, 10);
  if (*endptr != '\0' || b < INT_MIN || b > INT_MAX) {
    cout << "Invalid integer value" << endl;
    return 1;
  }

  int aInt = static_cast<int>(a);
  int bInt = static_cast<int>(b);

  if (bInt == 0){
    cout << "Error: Division by zero is not allowed" << endl;
    return 1;
  }

  cout << "a + b = " << aInt + bInt << endl;
  cout << "a - b = " << aInt - bInt<< endl;
  cout << "a * b = " << aInt * bInt<< endl;
  cout << "a / b = " << aInt / bInt << endl; // truncates towards zero 
  cout << "a % b = " << aInt % bInt << endl; // same sign as first operand.
  return 0;
}
```
