```
#include <iostream>
#include <string>

int main() {
    std::string s1 = "hello";
    std::cout << s1 + " world" << std::endl;

    std::string s2 = s1 + " world";
    std::cout << s2 << std::endl;

    std::string s3 = ", ".join({s1, "world", "mom"});
    std::cout << s3 << std::endl;

    return 0;
}
```
