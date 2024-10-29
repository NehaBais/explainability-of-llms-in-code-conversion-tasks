In C++, we use the `std::string` and `std::replace()` function for string substitution as opposed to what you were asking in your Python-like example. Here's how it can be done:

```cpp
#include <iostream>
#include <string>

int main() {
  std::string originalString = "Mary had a X lamb.";
  std::replace(originalString.begin(), originalString.end(), 'X', 'big'); // Replaces all occurrences of 'X' with 'big'.
  
  std::cout << originalString << std::endl;

  return 0;
}
```
In this C++ code, the `replace()` function from algorithm library is used to replace a sequence in a string. This will take three parameters: beginning and end of the part that needs to be replaced, as well as the new character that should replace 'X' (or any other given character). In your case it was replacing all occurrences of `X` with `big`.

