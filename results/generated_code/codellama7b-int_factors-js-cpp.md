
Here's the C++ code for the given JavaScript code:
```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factors(int num) {
    vector<int> n_factors = {};
    int i;

    for (i = 1; i <= sqrt(num); i += 1) {
        if (num % i == 0) {
            n_factors.push_back(i);
            if (num / i != i) {
                n_factors.push_back(num / i);
            }
        }
    }

    sort(n_factors.begin(), n_factors.end()); // numeric sort
    return n_factors;
}

int main() {
    vector<int> factors1 = factors(45);
    vector<int> factors2 = factors(53);
    vector<int> factors3 = factors(64);

    cout << "Factors of 45: ";
    for (auto factor : factors1) {
        cout << factor << " ";
    }
    cout << endl;

    cout << "Factors of 53: ";
    for (auto factor : factors2) {
        cout << factor << " ";
    }
    cout << endl;

    cout << "Factors of 64: ";
    for (auto factor : factors3) {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
```
Note that the `sqrt()` function is used to compute the square root of a number, and the `sort()` function is used to sort the vector in ascending order.
