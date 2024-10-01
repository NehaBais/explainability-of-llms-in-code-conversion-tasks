 In C++, you can use the `std::string` class and `std::cout` to achieve string interpolation similar to that in the given C code. Here's how you could do it:

```cpp
#include <iostream>
#include <string>

int main() {
  std::string extra = "little";
  std::cout << "Mary had a " << extra << " lamb.\n";
  return 0;
}
```
In this version, the interpolation is done by concatenating strings. The `<<` operator can be used to insert variables or values into the string. In this case, `"Mary had a "` is the first part of the sentence and `extra` (which contains "little") is inserted between those parts.
