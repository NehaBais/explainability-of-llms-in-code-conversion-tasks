The following is the C++ version of your Golang code.
Here's a direct translation:
```cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void printFactors(long long int nr) { 
    if (nr < 1) {
        cout << "\nFactors of " << nr << " not computed" << endl;
        return;  
    }
    vector<int> fs{1};
    auto apf = [&](long long int p, int e){
        int n = fs.size();
        for(int i=0, pp=p; i < e; ++i, pp*=p) {
            for(int j=0;j<n;++j) 
                fs.push_back(fs[j]*pp);   
        }       
    };  

    int e = 0;
    while ((nr & 1) == 0){ 
        nr >>= 1;
        e++; 
    }
    apf(2, e);

    for (long long int d = 3; nr > 1; d += 2) {
        if (d*d > nr) d = nr;
        e=0;
        while(nr % d == 0){
            nr /= d;
            ++e;   
        }
        if (e>0) apf(d, e);  
    }

    cout << "\nFactors of " << nr << " : ";
    for(auto i: fs) cout<<i<<" "; 
    cout << "\nNumber of factors = " << fs.size() << endl;   
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
    printFactors(600851475143LL);   // "LL" is used to specify long long int literals in C++.
    printFactors(999999999999999989LL);  
    return 0;     
} 
```
This code uses a similar method as the original Golang version - it iteratively divides the input number by increasing integers to find its factors. Factors are stored in a vector, which is then printed at the end.
