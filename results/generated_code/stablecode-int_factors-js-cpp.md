Here is your JavaScript code converted to C++:

```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<int> factors(int num) {

    std::vector<int> n_factors;
    for (int i = 1; i <= static_cast<int>(sqrt(num))); ++i) 
        if (num % i == 0) {
            n_factors.push_back(i);
            if (static_cast<float>(num))/static_cast<float>(i)) != static_cast<float>(i)))
                n_factors.push_back(num / i));
        }
    std::sort(n_factors.begin(), n_factors.end()); // numeric sort

    return n_factors;
}

int main() {
    std::vector<int> factorsList = factors(45);  // 
[1,3,5,9,15,45] 
for (int i = 0; i < factorsList.size(); ++i) 
 std::cout << factorsList[i] << " "; 
return 0;
}
```
This C++ code will compute the factors of a positive integer just like your JavaScript function `factors`. The main difference is that C++ works on compiled language while JavaScript is an interpreted language.
