```
#include <iostream>
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
    ++x;
    if (x * x == n) {
        factors1.push_back(x);
    }
    factors1.insert(factors1.end(), factors2.rbegin(), factors2.rend());
    return factors1;
}

int main() {
    for (auto i : {45, 53, 64}) {
        vector<int> factors = factor(i);
        cout << i << ": factors: ";
        for (auto f : factors) {
            cout << f << " ";
        }
        cout << endl;
    }
    return 0;
}
```
