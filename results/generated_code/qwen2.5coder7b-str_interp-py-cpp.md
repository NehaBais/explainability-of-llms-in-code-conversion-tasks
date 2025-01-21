In C++, you can use `std::string`'s `format()` method from `<format>` library or `sprintf()` function in the standard C library to perform string interpolation. Here is how you would do it using both methods:

Using `std::format()`, which is available starting with C++20:
```cpp
#include <iostream>
#include <string>

int main()
{
    std::string extra = "little";
    auto new_str = std::format("Mary had a {} lamb.", extra);
    std::cout << new_str;
    return 0;
}
```

If you're using C++17 or lower, you can use `sprintf()`:

#include <iostream>
#include <cstdio>

int main()
{
    std::string extra = "little";
    char new_str[50];
    sprintf(new_str, "Mary had a %s lamb.", extra.c_str());
    std::cout << new_str;
    return 0;
}

In the case of `sprintf()`, you need to ensure that your buffer (`new_str` in this example) is large enough to hold the resulting string. Also, notice that we need to use `c_str()` method to convert `std::string` into a C-style string (const char*).
