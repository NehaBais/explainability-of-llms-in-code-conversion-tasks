Sure, here is your Rust code converted to C++: 
```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// function to compute factors of a number
vector<int> factor(int num) {
    vector<int> factors; // create an empty vector for the factors of the number

    for (int i = 1; i <= sqrt(num); ++i) {  
        if (num % i == 0) {
            factors.push_back(i); // push smallest factor to factors
            // If the divisor and quotient are not same, then push the quotient also
            if(num/i != i)
                factors.push_back(num / i);  
        }
    }
    sort(factors.begin(), factors.end()); // sort the factors into numerical order for viewing purposes
    return factors; // return the factors
}

int main() {
    vector<int> result = factor(100); 
    for (const auto &i : result) {  
        cout << i << " ";   // print all elements of vector
    }
    result = factor(101);
    for (const auto &i : result) {  
        cout << i << " ";   // print all elements of vector
    }
    return 0;
}
```
