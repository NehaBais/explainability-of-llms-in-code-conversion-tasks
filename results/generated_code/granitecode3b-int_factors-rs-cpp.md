Sure, here's the C++ code that performs the same task:
```c++
#include 
#include 
#include 
using namespace std;
 
vector factor(int num) {
 vector factors;
 for (int i = 1; i <= sqrt(num); i++) {
 if (num % i == 0) {
 factors.push_back(i);
 factors.push_back(num / i);
 }
 }
 sort(factors.begin(), factors.end());
 return factors;
}
 
int main() {
 assert(factor(100) == vector({1, 2, 4, 5, 10, 10, 20, 25, 50, 100}));
 assert(factor(101) == vector({1, 101}));
 return 0;
}
```
This code uses a loop to iterate through all the positive integers up to the square root of the number being factored. If the current integer divides the number evenly, it is a factor and is added to the `factors` vector along with its corresponding factor. Finally, the `factors` vector is sorted in numerical order and returned.

