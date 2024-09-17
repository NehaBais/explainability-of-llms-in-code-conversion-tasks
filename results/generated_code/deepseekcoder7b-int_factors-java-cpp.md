Here is the C++ version of your Java code:

```C++
#include <iostream>
#include <set>
#include <cmath>
using namespace std;

// Function to calculate and print the factors
void findFactors(long n) {
    set<long> factors;  // Create a set for storing unique factors.
    
    // Adding number itself and one at first.
    factors.insert(n);
    factors.insert(1);
    
    // Loop from (n-1) to sqrt(n), checking if the remainder is zero. If yes, add both factors into set.
    for(long test = n - 1; test >= sqrt(n); --test){
        if(n % test == 0){
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    
    // Display all the factors
    for (auto i = factors.begin(); i != factors.end(); ++i) {
       cout << *i << endl;
   }
}

int main() {
    long number = 24;  // Testing with a positive integer, you can replace it as per your requirement.
    
    findFactors(number);
    
    return 0;
}
```

This C++ code does the same thing as your Java code - it computes and prints out the factors of a given number. The main difference is that in C++, we have to include libraries at the start and use different functions for things like creating set, adding elements to it etc. This translated version has been tested with a positive integer (24 in this case) and will print all its factors in ascending order.

