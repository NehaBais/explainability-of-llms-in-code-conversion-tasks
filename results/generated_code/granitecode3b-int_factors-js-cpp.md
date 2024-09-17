Here is the C++ code that computes the factors of a positive integer using the same logic as the given JavaScript code:
```c++
#include 
#include 
using namespace std;
vector factors(int num) {
 vector n_factors;
 for (int i = 1; i <= sqrt(num); i++) {
 if (num % i == 0) {
 n_factors.push_back(i);
 if (i * i != num) {
 n_factors.push_back(num / i);
 }
 }
 }
 sort(n_factors.begin(), n_factors.end());
 return n_factors;
}
int main() {
 int num = 45;
 vector factors = factors(num);
 for (int i = 0; i < factors.size(); i++) {
 cout << factors[i] << " ";
 }
 cout << endl;
 num = 53;
 factors = factors(num);
 for (int i = 0; i < factors.size(); i++) {
 cout << factors[i] << " ";
 }
 cout << endl;
 num = 64;
 factors = factors(num);
 for (int i = 0; i < factors.size(); i++) {
 cout << factors[i] << " ";
 }
 cout << endl;
 return 0;
}
```
This code defines a function `factors` that takes an integer as input and returns a vector of its factors. The function iterates over all the integers from 1 to the square root of the input number, checking if they are factors of the input number. If so, it adds them to the vector. Finally, it sorts the vector in ascending order using the `sort` function and returns it.
The `main` function calls the `factors` function with different input values and prints out the resulting factors for each case.

