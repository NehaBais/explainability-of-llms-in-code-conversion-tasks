 Here is the code in C++:
```
#include <string>
#include <iostream>

int main()
{
    std::string s = "hello";
    std::string s2 = s + " literal";

    std::cout << s << std::endl;
    std::cout << s2 << std::endl;
}
```
Note that in C++, you can simply use the `+` operator to concatenate strings, so there is no need for a separate function like `sconcat`. Also, instead of using `malloc` and `free`, you can use the `std::string` class to manage memory automatically.
