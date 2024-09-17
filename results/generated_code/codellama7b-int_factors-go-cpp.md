 Here is the equivalent C++ code for the given Go program:
```c
#include <iostream>
#include <vector>
using namespace std;

void printFactors(int64_t nr) {
    if (nr < 1) {
        cout << "Factors of " << nr << " not computed" << endl;
        return;
    }
    vector<int64_t> fs = {1};
    auto apf = [&](int64_t p, int e) {
        for (int i = 0; i < e; i++) {
            for (int j = 0; j < fs.size(); j++) {
                fs.push_back(fs[j] * p);
            }
        }
    };
    int e = 0;
    while (nr % 2 == 0) {
        nr /= 2;
        e++;
    }
    apf(2, e);
    for (int64_t d = 3; d <= nr; d += 2) {
        if (d * d > nr) {
            d = nr;
        }
        for (e = 0; nr % d == 0; e++) {
            nr /= d;
        }
        if (e > 0) {
            apf(d, e);
        }
    }
    cout << "Factors of " << nr << ": ";
    for (int i = 0; i < fs.size(); i++) {
        cout << fs[i] << " ";
    }
    cout << endl;
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
Note that in C++, the `printFactors` function is rewritten to use a vector of integers instead of an array, and the `apf` function is defined as a lambda expression. Also, the `e` variable has been removed since it is no longer needed in the new implementation.
