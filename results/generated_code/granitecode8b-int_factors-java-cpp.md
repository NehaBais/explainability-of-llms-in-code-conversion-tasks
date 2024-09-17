Here is the converted code from Java to C++ for computing the factors of a positive integer:
```
#include 
#include 
using namespace std;
set factors(long n) {
 set factors;
 factors.insert(n);
 factors.insert(1L);
 for(long test = n - 1; test >= sqrt(n); test--) {
  if(n % test == 0) {
   factors.insert(test);
   factors.insert(n / test);
  }
 }
 return factors;
}
int main() {
 long n = 24;
 set result = factors(n);
 for(auto factor : result) {
  cout << factor << " ";
 }
 cout << endl;
 return 0;
}
```
This code computes the factors of a positive integer `n` and returns them in a sorted set. The main function demonstrates how to use the `factors` function by computing the factors of 24 and printing them to the console. Note that we have included the necessary libraries for I/O operations (`iostream`) and mathematical operations (`cmath`).

