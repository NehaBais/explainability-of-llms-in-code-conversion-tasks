The equivalent code in C++ would look like this:

```c++
#include <iostream>
#include <vector>

// Function to find all divisors (factors) of a given number
std::vector<long long> find_factors(long long n) {
    std::vector<long long> factors;
    // Divide the number by 2 until it's odd
    while(n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    // Check for other prime factors
    for(long long i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    // If n is a prime number greater than 2
    if (n > 2)
        factors.push_back(n);

    return factors;
}

int main() {
    // Test cases
    std::vector<long long> test_numbers = { -1, 0, 1, 2, 3, 53, 45, 64, 600851475143, 999999999999999989 };

    for(long long num : test_numbers) {
        std::vector<long long> factors = find_factors(num);
        std::cout << "Factors of " << num << ": ";
        for(int factor : factors)
            std::cout << factor << " ";
        std::cout << std::endl;
    }

    return 0;
}
```

This program first defines a function `find_factors` that returns all divisors of the input number. Then it tests this function with a set of numbers and prints out the factors for each one.
