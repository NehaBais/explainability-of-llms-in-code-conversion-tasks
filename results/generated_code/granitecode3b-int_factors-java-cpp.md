Here is the C++ code that computes the factors of a positive integer using the same algorithm as the Java code provided:
```c++
#include 
#include 
#include 
using namespace std;
int main() {
 long n = 12;
 cout << "Factors of " << n << ":" << endl;
 for(long i = 2; i <= n / 2; i++) {
 if(n % i == 0) {
 cout << i << " and " << n / i << endl;
 }
 }
 return 0;
}
```
This code uses a loop to iterate over all possible factors of `n` from 2 to `n/2`. For each factor, it checks whether it is a factor by dividing `n` by the factor and checking if the remainder is zero. If so, then the factor is added to the output list. The resulting list contains all the unique factors of `n` in sorted order. 
Note that this code only computes the factors up to half of `n`. This is because any factor larger than half of `n` would also be a factor smaller than itself, so it would have already been computed in the loop above.

