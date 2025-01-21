Here is the equivalent C++ code for your Golang code. This will compute and print out all the factors for a given number.

```cpp
#include <iostream>
#include <vector>

void printFactors(int64_t nr) {
    if (nr < 1) {
        std::cout << "Factors of " << nr << " not computed" << std::endl;
        return;
    }
    std::cout << "Factors of " << nr << ": ";
    std::vector<int64_t> fs = {1};
    
    auto apf = [&](int64_t p, int e) {
        size_t n = fs.size();
        for (size_t i = 0, pp = p; i < e; ++i, pp *= p) {
            for (size_t j = 0; j < n; ++j)
                fs.push_back(fs[j] * pp);
        }
    };

    int e = 0;
    while ((nr & 1) == 0) {
        nr >>= 1;
        ++e;
    }
    apf(2, e);

    for (int64_t d = 3; nr > 1; d += 2) {
        if (d * d > nr)
            d = nr;

        e = 0;
        while (nr % d == 0) {
            nr /= d;
            ++e;
        }
        if (e > 0)
            apf(d, e);
    }

    for(int64_t factor: fs){
        std::cout << factor << " ";
    }
    
    std::cout << "\nNumber of factors = " << fs.size() << std::endl;
}

int main() {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    printFactors(600851475143);
    printFactors(999999999999999989);

    return 0;
}
```
Please note that C++ doesn't support appending to a vector directly from within the lambda function, so `std::vector::insert` is used instead.
