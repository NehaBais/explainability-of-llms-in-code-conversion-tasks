In C++, you can use the `std::string` class to accomplish similar operations. Here is how you could write the code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s1 = "hello";
    std::cout << s1 + " world" << std::endl;

    std::string s2 = s1 + " world";
    std::cout << s2 << std::endl;

    s1 = "hello";
    std::cout << ", ".join({s1, "world", "mom"}) << std::endl; // This line will cause a compile error in C++ as there is no built-in function for this operation. You may need to use an external library or write your own function to concatenate strings in C++. For example, you can use the `std::ostringstream` class:

    std::ostringstream oss;
    oss << s1 << " world";
    std::cout << oss.str() << std::endl;

    // Alternatively, if you prefer using a standard library function for string concatenation:
    std::vector<std::string> strings = {s1, "world", "mom"};
    std::string s2 = "";
    for (const auto& str : strings) {
        s2 += str;
    }
    std::cout << s2 << std::endl;

    return 0;
}
```
In the above code, we first print the string "hello world". Then we concatenate the original string with another string literal and print it. After that, we define a new string variable `s1` and use the `std::vector` class to store three strings. We then iterate over the vector and concatenate all of these strings into `s2`. Finally, we print `s2`.

Please note that in C++, there is no built-in function to join elements from a vector into a string using a comma. You can use `std::ostringstream` or write your own custom function for this purpose.
