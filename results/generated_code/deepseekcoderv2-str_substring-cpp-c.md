## Solution:
```
#include <iostream>
#include <string>

int main()
{
    std::string str = "0123456789";

    int n = 3;
    int m = 4;
    char c = '2';
    std::string sub = "456";

    std::cout << str.substr(n, m) << std::endl;
    std::cout << str.substr(n) << std::endl;
    std::cout << str.substr(0, str.size() - 1) << std::endl;
    int pos = str.find(c);
    if (pos != std::string::npos) {
        std::cout << str.substr(pos, m) << std::endl;
    }

    size_t sub_start = str.find(sub);
    if (sub_start != std::string::npos && sub_start + m <= str.length()) {
        std::cout << str.substr(sub_start, m) << std::endl;
    }

    return 0;
}
```
