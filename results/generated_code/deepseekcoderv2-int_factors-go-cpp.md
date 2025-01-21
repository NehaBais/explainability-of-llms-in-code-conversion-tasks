 To convert the provided Golang code to C++, we need to follow several steps:

1. Handle the input validation and edge cases.
2. Implement the logic to compute the prime factorization.
3. Print the factors in a similar manner as the original Go code.
4. Compile and run the C++ program.

Here's the equivalent C++ code:

```cpp
#include <iostream>
#include <vector>
#include <cmath>

void printFactors(int64_t nr) {
    if (nr < 1) {
        std::cout << "Factors of " << nr << " not computed" << std::endl;
        return;
    }
    std::vector<int64_t> fs = {1};
    auto apf = [](int64_t p, int e) {
        size_t n = fs.size();
        for (int i = 0, pp = p; i < e; ++i, pp *= p) {
            for (size_t j = 0; j < n; ++j) {
                fs.push_back(fs[j] * pp);
            }
        }
    };

    int e = 0;
    while (nr % 2 == 0) {
        nr /= 2;
        e++;
    }
    apf(2, e);

    for (int64_t d = 3; nr > 1; d += 2) {
        if (d * d > nr) {
            d = nr;
        }
        int e = 0;
        while (nr % d == 0) {
            nr /= d;
            e++;
        }
        if (e > 0) {
            apf(d, e);
        }
    }

    for (int64_t factor : fs) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;
    std::cout << "Number of factors = " << fs.size() << std::endl;
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

### Explanation:

1. **Input Validation**: The function `printFactors` checks if the input number is less than 1 and handles it accordingly by printing a message.
2. **Prime Factorization**: The logic for prime factorization remains mostly the same, but in C++, we use vectors to store factors dynamically.
3. **Printing Factors**: After computing the factors, the program prints them using a range-based loop.
4. **Main Function**: The `main` function calls `printFactors` with various test cases.

This C++ code should provide similar functionality to the original Go code for computing and displaying the factors of positive integers.
