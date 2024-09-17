Here is the C++ version of your Rust code:

Please note that in C++, you typically don't use 'assert_eq!' to check equality between two vectors. You would typically write a separate function for this purpose and compare the results from both factor functions manually (though automated testing libraries might be able to help with this). 

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

std::vector<int> factor(int num) {
    std::vector<int> factors;
    
    for (int i = 1; i <= sqrt(num); ++i) { 
        if (num % i == 0){
            factors.push_back(i);
            factors.push_back(num/i);
         }
     }
     
    std::sort(factors.begin(), factors.end()); // sorts the factors into numerical order for viewing purposes

    return factors; 
}

int main() {
  
    auto res = factor(100);
    for (auto i : res)
        std::cout << i << " "; 
        
    res = factor(101);
    for (auto i : res)
        std::cout << i << " ";  
    
    return 0;
}
```
This C++ code does exactly the same thing as your Rust code. It finds all factors of a number and returns them in a sorted vector. The main function prints out these factors for numbers 100 and 101.

