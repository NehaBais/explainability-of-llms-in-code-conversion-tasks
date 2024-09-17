```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> factor(int n) {
    std::vector<int> factors1;
    std::vector<int> factors2;

    for (int x = 1; x <= sqrt(n); ++x) {
        if (n % x == 0) {
            factors1.push_back(x);
            factors2.push_back(n / x);
        }
    }

    std::reverse(factors2.begin(), factors2.end());
    factors1.insert(factors1.end(), factors2.begin(), factors2.end());

    return factors1;
}

int main() {
    for (int i : {45, 53, 64}) {
        std::cout << i << ": factors: ";
        for(int factor : factor(i)) {
            std::cout << factor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```
