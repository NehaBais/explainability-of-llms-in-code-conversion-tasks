Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";
    std::cout << s << std::endl;
    
    std::string s1 = s + " world";
    std::cout << s1 << std::endl;
    
    return 0;
}
```

In this code, we declare a `std::string` variable called `s`, which is initialized with the value "hello". Then we print its content using `std::cout`. Next, we create another string variable `s1` and assign to it the concatenation of `s` and " world". Finally, we print out the content of `s1`.
