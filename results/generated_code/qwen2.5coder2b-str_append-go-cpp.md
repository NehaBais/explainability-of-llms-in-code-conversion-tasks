To convert the given Go code to C++, you can use a `std::string` object. Here's the equivalent code:

```cpp
#include <iostream>
#include <string>

int main() {
  std::string s = "foo";
  s += "bar";
  std::cout << s;
}
```

In this C++ code, we first declare and initialize a `std::string` object named `s` with the string value "foo". Then, we use the `+=` operator to append the string literal "bar" to `s`. Finally, we print the contents of `s` using `std::cout`.

This is the most idiomatic way to concatenate strings in C++, as it avoids the need for a `strings.Builder` and directly appends the two strings together.
