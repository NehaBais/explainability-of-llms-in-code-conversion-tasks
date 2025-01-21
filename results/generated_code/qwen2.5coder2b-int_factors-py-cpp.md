Sure, here is the equivalent code for your problem in C++. This uses a similar approach to Python but with basic arithmetic operations.

```c++
#include <iostream>
using namespace std;

// Function to calculate all factors of a number
vector<int> calculateFactors(int num) {
    vector<int> factors;
    if (num <= 1) return factors; // Numbers less than or equal to 1 have no factors

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            factors.push_back(i);
            if (i != num / i) { // Avoid adding the square root twice for perfect squares
                factors.push_back(num / i);
            }
        }
    }

    if (num > 1) { // Check if num is a prime number greater than 1
        factors.push_back(num);
    }
    return factors;
}

int main() {
    vector<int> test_numbers = {45, 53, 64};
    for (int i : test_numbers) {
        vector<int> factors = calculateFactors(i);
        cout << i << ": factors: " << factors.size() << endl;
        for (int factor : factors) {
            cout << factor << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### Explanation:
- The function `calculateFactors` takes an integer as input and returns a vector of its factors.
- It iterates from 2 up to the square root of the number, checking if each number divides the input number without a remainder. If so, it adds both the divisor and its quotient (if they are different) to the result list.
- The main function tests this with three numbers: 45, 53, and 64, and prints out their factors.
