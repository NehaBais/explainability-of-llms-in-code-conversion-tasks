The following code is the equivalent of your Golang code in C++. It uses a similar algorithm to compute all prime factors, but does so in C++. The code prints out the prime factors and the number of factors for each input number.

```C++
#include<bits/stdc++.h>
using namespace std;

void printFactors(int64_t nr) {
    if (nr < 1) {
        cout << "Factors of " << nr << " not computed" << endl;
        return;
    }
    cout << "Factors of " << nr << ": ";
    vector<int64_t> fs = {1};
    auto apf = [&fs](int64_t p, int e) {
        size_t n = fs.size();
        for (size_t i = 0, pp = p; i < e; i++, pp *= p) {
            for (size_t j = 0; j < n; j++) {
                fs.push_back(fs[j]*pp);
            }
        }
    };
    int64_t e = 0;
    while (nr % 2 == 0) {
        e++;
        nr /= 2;
    }
    apf(2, e);
    for (int64_t d = 3; nr > 1; d += 2) {
        if (d*d > nr) {
            d = nr;
        }
        e = 0;
        while (nr % d == 0) {
            e++;
            nr /= d;
        }
        if (e > 0) {
            apf(d, e);
        }
    }
    sort(fs.begin(), fs.end());
    fs.erase(unique(fs.begin(), fs.end()), fs.end());
    for(int i=0;i<fs.size();i++) {
        cout<<fs[i]<<" ";
    }
    cout<<"\nNumber of factors = " << fs.size()<<endl;
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
}
```

This code works by dividing the number by 2 until it's odd, then checking for even factors up to the square root of the remaining number. For each prime factor found, it multiplies the current list of factors by that prime factor repeatedly (the count of times it was divided by 2 previously). The result is sorted and duplicates removed before printing.
  
It's important to note that C++ code may perform better than Golang for larger numbers due to its built-in optimizations, especially when dealing with large data sets or complex computations.
