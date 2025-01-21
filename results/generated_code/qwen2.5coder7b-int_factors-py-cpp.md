Here is the equivalent C++ code for your Python script:

```cpp
#include <iostream>
#include <vector>

std::vector<int> factor(int n) {
    std::vector<int> factors1;
    int x = 1;
    while(x * x < n){
        if(n % x == 0){
            factors1.push_back(x);
            if(n / x != x)
                factors1.push_back(n / x);
        }
        ++x;
    }
    if (x * x == n) {
        factors1.push_back(x);
    }

    for(int i = factors1.size() - 1; i >= 0; --i){
        factors1.push_back(factors1[i]);
    }

    return factors1;
}

int main(){
    int values[] = {45, 53, 64};
    for(int value : values){
        std::vector<int> results = factor(value);
        std::cout << value << ": factors: ";
        for (int result : results)
            std::cout << result << " ";
        std::cout << std::endl;
    }
    
    return 0;
}
```

The code creates a function `factor` that computes the factors of a positive integer. It uses a while loop to find all the factors and then appends them to a vector. The main part of the program tests this function for a set of values and prints out the results.

Note: C++ doesn't have equivalent to Python's `isqrt()` function, so we manually calculate the square root of `n` by incrementing `x` until `x * x` is greater than or equal to `n`.
