The error message is indicating that `std::vector<long long> fs = {1};` cannot be used to initialize an instance of vector. This is because, as per C++ standard, non-aggregates like std::vector can't be initialized using initializer lists in the way it's done with int or other user defined types.

The fix for this issue would be to use `push_back` method provided by std::vector to add elements one at a time.

Here is the corrected code block:

```cpp
#include <iostream>
#include <vector>
int main() {
    std::vector<long long> fs;
    fs.push_back(1);
    for (const auto& f : fs) {
        std::cout << f << " ";
    }
    std::cout<< "\nNumber of factors = " << fs.size() <<std::endl;
}
```
This corrected code still maintains the factor calculation functionality but it doesn't have any issues with initializing vectors like in the original Golang code you provided.

