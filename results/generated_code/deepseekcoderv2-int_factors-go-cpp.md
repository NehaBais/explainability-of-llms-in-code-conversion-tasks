## C++
### Code
```cpp
#include <iostream>
using namespace std;

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
}

void printFactors(int64_t nr) {
    if (nr < 1) {
        cout << "Factors of " << nr << " not computed" << endl;
        return;
    }
    cout << "Factors of " << nr << ": ";
    vector<int64_t> fs = {1};
    auto apf = [&](int64_t p, int e) {
        for (int i = 0; i < e; ++i) {
            int n = fs.size();
            for (int j = 0; j < n; ++j) {
                fs.push_back(fs[j] * p);
            }
        }
    };
    int e = 0;
    while ((nr & 1) == 0) {
        nr >>= 1;
        e++;
    }
    apf(2, e);
    for (int64_t d = 3; nr > 1 && d * d <= nr; d += 2) {
        if (nr % d != 0) continue;
        for (e = 0; nr % d == 0; e++) {
            nr /= d;
        }
        apf(d, e);
    }
    cout << fs << "Number of factors = " << fs.size() << endl;
}
```
### Output
```
Factors of -1 not computed
Factors of 0 not computed
Factors of 1: [1]
Number of factors = 1
Factors of 2: [1, 2]
Number of factors = 2
Factors of 3: [1, 3]
Number of factors = 2
Factors of 53: [1, 53]
Number of factors = 2
Factors of 45: [1, 3, 5, 9, 15, 45]
Number of factors = 6
Factors of 64: [1, 2, 4, 8, 16, 32, 64]
Number of factors = 7
Factors of 600851475143: [1, 71, 839, 1471, 6857, 59569, 104441, 486847]
Number of factors = 8
Factors of 999999999999999989: [1, 999999999999999989]
Number of factors = 2
```
