Here is the C++ code that performs the same task as the given Python code:
```c++
#include 
#include 
using namespace std;
 
vector factor(int n) {
 vector factors;
 for (int i = 1; i <= sqrt(n); ++i) {
 if (n % i == 0) {
 factors.push_back(i);
 factors.push_back(n / i);
 }
 }
 return factors;
}
 
int main() {
 for (int n : {45, 53, 64}) {
 vector factors = factor(n);
 cout << n << ": factors: ";
 for (int f : factors) {
 cout << f << " ";
 }
 cout << endl;
 }
 return 0;
}
```
The C++ code uses the standard library function `sqrt` to calculate the square root of the input number. The function `factor` iterates over all numbers from 1 up to the square root of the input number, and checks if each number is a factor by checking whether the remainder after division by that number is 0. If it is, then it is added to the list of factors along with its quotient. Finally, the function returns the list of factors.
The main function iterates over three sample inputs (45, 53, and 64), calls the `factor` function for each input, and prints out the list of factors for each input.

