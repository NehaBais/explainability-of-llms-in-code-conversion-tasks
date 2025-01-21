In C++, you can achieve this by using `std::string` type for string operations. Here's how the code would look like:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";
    std::string result = s + " there!";
    std::cout << result << std::endl;
    return 0;
}
```

In this code:
- We include the `#include <iostream>` header for input-output operations.
- We include the `#include <string>` header for string operations.
- We declare a `std::string` variable `s` and assign it the value "hello".
- We create another `std::string` variable `result` by concatenating `s` with the string literal `" there!"`.
- Finally, we print the content of `result`.

When you run this code, it will output:

hello there!

