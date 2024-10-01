In C++, you can use the `std::string` class to more easily manipulate strings. Here is how it would look:

```cpp
#include<iostream>
#include<cstring>

int main()
{
    std::string str="my String";
    const char* cstr="Changed ";
    
    // Prepend
    str = cstr + str;
    
    std::cout<<str<<"\n";
    return 0;
}
```

The above code creates a string variable `str` equal to "my String". Then it prepends the value of another string literal "Changed " to this string using the `+` operator. The result is then printed out.

Note: In C++, memory management for `std::string` objects is automatically handled by the runtime, so there's no need to manually allocate or free memory with `malloc`, `calloc`, or `free`.
