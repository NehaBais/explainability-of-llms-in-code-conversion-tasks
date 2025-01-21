The code snippet provided is already in C++ and does not need to be converted. However, if you want it to be in C++, you would need to use string class from the <string> header:

```cpp
#include<iostream>
#include<string>

int main() {
    std::string str = "Good Morning";
    std::string cstr = " to all";
    std::string cstr2 = " !!!";

    // failure when space allocated to str is insufficient.
    if (str.length() + cstr.length() + cstr2.length() > str.capacity()) {
        /* 1st method */
        str += cstr;

        /* 2nd method */
        int x = str.length();
        str.append(cstr2);

        std::cout << str << "\n";

    }
    return 0;
}
```

In the above code, we have used `std::string` class which simplifies string handling. The `capacity()` function in `std::string` returns the total capacity of the string to store characters. If the required capacity is not available, it increases automatically by allocating more memory.

Note that the size of `str` is limited because it has a fixed size in C++. In C++, you can use standard library functions like `std::vector` or `std::string` to handle dynamic strings.
