Below is the equivalent C++ code for the provided Go code:

```cpp
#include <iostream>
#include <string>

void match(std::string first, std::string second) {
    std::cout << "1. " << first << " starts with " << second << ": " << (first.compare(second) == 0 && first.find(second) == 0) << "\n";

    int i = first.find(second);
    std::cout << "2. " << first << " contains " << second << ": " << (i >= 0) << ", \n";

    if (i >= 0) {
        std::cout << "2.1. at location " << i << ",\n";
        int start = i + 1;
        while(true){
            int index = first.find(second, start));
            if (index < 0){
                break;
            }
            std::cout << "2.2. at location " << index << ", \n";
            start += index + 1;
        }
        std::cout << "2.2. and that's all\n";
    }

    std::cout << "3. " << first << " ends with " << second << ": " << (first.compare(second) == 0 && first.find(second, first.length() - second.length()) >= 0)) << "\n";
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```
Please note that this code doesn't include any error checking or exception handling. This should be taken into consideration when using the provided code in a production environment.
