Here is the equivalent C++ code for your Python code:
```cpp
#include <vector>
#include <cmath>
using namespace std;

vector<int> factor(int n) {
    vector<int> factors1, factors2;
    for (int x = 1; x <= sqrt(n); ++x) {
        if (n % x == 0) {
            factors1.push_back(x);
            factors2.push_back(n / x);
        }
    }
    if (sqrt(n) * sqrt(n) == n) {
        factors1.push_back((int)sqrt(n));
    }
    vector<int> factors3 = factors2;
    reverse(factors3.begin(), factors3.end());
    for (auto it = factors3.rbegin(); It != factors3.rend(); ++It) {
        factors1.push_back(*It);
    }
    return factors1;
}

int main() {
    vector<int> i = {45, 53, 64};
    for (auto n : i) {
        vector<int> factors = factor(n);
        cout << n << ": factors: ";
        for (auto f : factors) {
            cout << f << ", ";
        }
        cout << "\n";
    }
    return 0;
}
```
This C++ code first defines a function factor that takes an integer `n` and returns a vector of its prime factors. It uses a for loop to find the prime factors, checking if `n` is divisible by each number from 1 to the square root of `n`. If it is, the factor is added to `factors1`, and its corresponding divisor is added to `factors2`. After that, the function checks whether the perfect square root of `n` squared equals `n`. If so, it adds the square root to `factors1`. Finally, it reverses `factors2` and appends its elements to `factors1`. The main function uses this factorization function on a list of numbers and prints the result.
