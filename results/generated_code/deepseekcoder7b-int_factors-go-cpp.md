The provided code is already in C++ and doesn't require conversion, it is a Golang program. However, if you prefer to see the equivalent C++ version here it is:

```cpp
#include <iostream>
#include <vector>

void printFactors(long long nr) {
    if (nr < 1){
        std::cout << "Factors of " << nr << " not computed" <<std::endl; 
        return;
    }
    
    std::cout << "Factors of "<< nr <<": ";
    std::vector<long long> fs = {1};

    auto apf = [](std::vector<long long>& fs, long long p, int e) {
        int n = fs.size();
        for (int i = 0, pp = p; i < e; ++i, pp *= p){
            for(int j = 0; j < n; ++j){
                fs.push_back(fs[j]*pp);
             } 
        }  
    };
    
    int e = 0;
    while (nr % 2 == 0) {
        nr /= 2;
        ++e;
    }
    apf(fs, 2, e);

    for (long long d = 3; nr > 1; d += 2){
        if (d * d > nr){
            d = nr;
        }
        e = 0;
        while (nr % d == 0) {
            nr /= d;
            ++e;
        }
        if(e > 0) {
           apf(fs, d, e); 
        }
    }
    
    for (const auto & f : fs){
       std::cout << f<< ' ';
    }

    std::cout<< "\nNumber of factors = "<< fs.size() <<std::endl;
}

int main(){
   printFactors(-1);
   printFactors(0);
   printFactors(1);
   printFactors(2);
   printFactors(3);
   printFactors(53);
   printFactors(45);
   printFactors(64);
   //printFactors(600851475143);  uncommenting this line will cause the program to be too slow as it involves a huge number.
   //printFactors(999999999999999989);  same reason, it's too large.
}
```

This C++ code works in the similar way with Golang code. It finds and prints out all factors of a given number. Note that this program uses lambda function `apf` which is equivalent to anonymous functions used in Go language to perform factor calculation. Lambda expression allows us to create unnamed, inline instance of any function call at compile time.

