This is the equivalent C++ code for the provided Golang program: 

```cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void printFactors(long long nr) {
    if (nr < 1) {
        cout << "\nFactors of"<< nr << "not computed";
        return;
    }
    vector<long long> factors;
    factors.push_back(1);
    auto apf = [&](long long p, int e) {
        int n = factors.size();
        for (int i=0; i<e; ++i,p*=p) { 
            for (int j=0; j<n; ++j) { 
                factors.push_back(factors[j]*p);
            } 
        }
    };

    long long e = 0;
    while ((nr & 1) == 0) {
        ++e;
        nr >>= 1;
    }
    apf(2, e);

    for (long long d = 3; nr > 1; d += 2) {
        if (d*d > nr) {
            d = nr;
        }
        while ((nr %= d) == 0) {
            ++e;
        }
        if (e > 0) {
            apf(d, e);
        }
    }

    cout << "Factors of "<< nr <<" are: \n";
    for (auto &i : factors) {
        cout << i << ' ';
    }
    cout << "\nNumber of factors = " << factors.size() << endl;
}

int main() {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    printFactors(600851475143);
    printFactors(999999999999999989);
    return 0;
}
```
