 In C++, string interpolation is not directly supported like in Rust. So, we need to manually replace the placeholder with its corresponding value:

```cpp
#include <iostream>
#include <string>

int main() {
    std::cout << "Mary had a little lamb" << std::endl;
    
    // You can specify order
    std::cout << "little had a " << "Mary" << " lamb" << std::endl;
    
    // Or named arguments if you prefer
    std::string name = "Mary";
    std::string adj = "little";
    std::cout << adj + " had a " + name + " lamb" << std::endl;
}
```
Please note that unlike Rust, the order of substitution is important in C++. If you want to add some flexibility and allow named or ordered arguments as per preference, we can use std::map or std::vector for this purpose.
