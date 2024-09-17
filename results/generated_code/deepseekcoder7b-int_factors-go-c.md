Below is the C code equivalent to your Golang code for computing and printing factors of a positive integer. 

In this, we first create an array of integers (`factors[]`) that will store all the factors of the given number. Next, we loop through numbers from 1 to 'n' and check if they divide evenly into our target number i.e., `number % i == 0`. If they do, we add them to our `factors[]` array using the `push_back()` function in C++. Finally, we print all the factors of a given integer 'n'.

```c
#include <stdio.h>
#include <vector>
using namespace std;

void printFactors(int64_t nr) {
    if (nr < 1){
        printf("Factors not computed\n");
        return;
     }
   printf("Factors of %d: ", nr);
   vector<int64_t> factors;
   factors.push_back(1);
   for (int i = 2; i * i <= nr; ++i) {
       if ((nr % i) == 0) {
           factors.push_back(i);
           if(i != (nr/i)) 
               factors.push_back(nr/i);
      }
   }
   factors.push_back(nr); //Push the number itself in case it is a prime number
   
   for (int64_t f : factors) {
       printf("%lld ", f);
   }
   
   printf("\nNumber of factors = %lu\n",factors.size());
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
    //printFactors(600851475143);  //This test case will take very long time to execute.
    //printFactors(999999999999999989); This number is too large for int64_t type in C/C++, it overflows.
}
```
Please note that the integer factorization (prime factorization) can be very expensive and time consuming if we are dealing with huge numbers (like 600851475143 mentioned in your code). The reason is there could be many factors for a given number, and it takes linear time to find all of them.

