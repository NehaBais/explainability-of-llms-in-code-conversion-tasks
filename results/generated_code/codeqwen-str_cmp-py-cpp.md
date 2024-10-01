The following code converts the given Python code to C++.

This C++ code uses `std::string` for comparison and the `std::cout` object for output. It also handles different data types such as integers, floating point numbers and strings. Case-sensitive comparisons are implemented by default in C++ string comparison operators.

```cpp
#include <iostream>
#include <string>

void compare(const std::string& A, const std::string& B) {
    std::cout << "\n" << A << " is of type " << typeid(A).name() << " and " << B << " Is of type " << typeid(B).name() << std::endl;

    if (A <  B) {      std::cout << A << " is strictly less than  " << B << std::endl; }
    if (A <= B) {      std::cout << A << " Is less than or equal to " << B << std::endl; }
    if (A >  B) {      std::cout << A << " Is strictly greater than  " << B << std::endl; }
    if (A >= B) {      std::cout << A << " Is greater than or equal to " << B << std::endl; }
    if (A == B) {      std::cout << A << " Is equal to " << B << std::endl; }
    if (A != B) {      std::cout << A << " Is not equal to " << B << std::endl; }

    if (&A == &B) {    std::cout << A << " Has object identity with " << B << std::endl; }
    else {               std::cout << A << " Has negated object identity with " << B << std::endl; }
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(std::to_string(24), std::to_string(123));
    compare(std::to_string(5.0), std::to_string(5));
    return 0;
}
```

Note: The `typeid(A).name()` method is used to get the name of A's type in C++, which is not as straightforward as in Python because it does not provide a human-readable name. This may be helpful for debugging purposes only.
