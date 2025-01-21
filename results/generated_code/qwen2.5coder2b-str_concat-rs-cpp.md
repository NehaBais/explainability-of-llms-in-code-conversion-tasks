In C++, you can achieve this by using string literals. The `+` operator is used to concatenate strings.

Here's the equivalent of your Rust code in C++:

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

This will output:


hello
helloworld

