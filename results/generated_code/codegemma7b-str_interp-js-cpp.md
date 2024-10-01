```cpp
#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  std::string replaced = original.replace(original.find("X"), 1, little);

  std::cout << "Original string: " << original << std::endl;
  std::cout << "Replaced string: " << replaced << std::endl;

  return 0;
}
```

**Explanation:**

* The `replace()` method in C++ takes three arguments:
    * The starting position of the substring to replace.
    * The length of the substring to replace.
    * The new substring to replace with.
* In this case, we find the position of the substring "X" using `find()` and replace it with "little" with a length of 1.
* The `original` string is not modified in this process.

**Output:**

Original string: Mary had a X lamb
Replaced string: Mary had a little lamb
