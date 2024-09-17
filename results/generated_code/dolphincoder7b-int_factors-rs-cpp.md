```cpp
#include <vector>
#include <iostream>
 
std::vector<int> factor(int num) {
    std::vector<int> factors;
 
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            factors.push_back(i);
            factors.push_back(num/i);
        }
    }
    
    // sort the factors in ascending order
    std::sort(factors.begin(), factors.end());
 
    return factors;
}
 
int main() {
    assert(factor(100) == std::vector<int>{1, 2, 4, 5, 10, 10, 20, 25, 50, 100});
    assert(factor(101) == std::vector<int>{1, 101});
    
    return 0;
}
```

In this example, we have converted the Rust code to C++. We have included standard library vector and iostream for easier handling of vectors and output respectively. The function factor computes the factors of a given number using a loop from 1 up to the square root of the number, checking if each number divides evenly into the original number. If it does, we push both the factors onto the vector. After all factors have been pushed, the vector is sorted in ascending order using the sort function. The main function includes two assertions testing the correctness of the factor function with some test cases.
