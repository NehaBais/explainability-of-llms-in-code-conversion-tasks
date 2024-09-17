```cpp
#include <iostream>
#include <vector>

void printFactors(long long nr) {
    if (nr < 1) {
        std::cout << "\nFactors of " << nr << " not computed" << std::endl;
        return;
    }
    std::cout << "\nFactors of " << nr << ": ";
    std::vector<long long> fs = {1};
    auto apf = [&](long long p, int e) {
        for (int i = 0; i < e; ++i)
            for (auto &f : fs)
                fs.push_back(f * p);
    };
    int e = 0;
    while (nr % 2 == 0) {
        nr >>= 1;
        ++e;
    }
    apf(2, e);
    for (long long d = 3; nr > 1; d += 2) {
        if (d * d > nr) {
            d = nr;
        }
        while (nr % d == 0) {
            nr /= d;
            ++e;
        }
        if (e > 0) {
            apf(d, e);
            e = 0;
        }
    }
    std::cout << fs << std::endl;
    std::cout << "Number of factors = " << fs.size() << std::endl;
}

int main() {
    printFactors(-1LL);
    printFactors(0LL);
    printFactors(1LL);
    printFactors(2LL);
    printFactors(3LL);
    printFactors(53LL);
    printFactors(45LL);
    printFactors(64LL);
    printFactors(600851475143LL);
    printFactors(999999999999999989LL);

    return 0;
}
```

Please note that the following changes were made to the original Golang code:
- Changed package name from `main` to `iostream` because C++ does not have a built-in `fmt` library like in Go. 
- The `make` function used to create a slice in Go was replaced with direct initialization of vector.
- Added `auto` keyword before lambda functions for simplicity and conciseness.
- Used `std::endl` to print new lines similar to Golang's `fmt.Println`.
