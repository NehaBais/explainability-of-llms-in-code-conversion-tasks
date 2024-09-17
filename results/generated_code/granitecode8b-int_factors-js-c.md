Here is the converted code from JavaScript to C:
```
#include 
#include 
using namespace std;
vector factors(int num) {
 vector n_factors;
 int i;
 for (i = 1; i <= sqrt(num); i += 1) {
 if (num % i == 0) {
 n_factors.push_back(i);
 if (num / i != i) {
 n_factors.push_back(num / i);
 }
 }
 }
 sort(n_factors.begin(), n_factors.end()); // numeric sort
 return n_factors;
}
int main() {
 int num = 45;
 vector factors = factors(num);
 cout << "[";
 for (int i = 0; i < factors.size(); i++) {
 if (i > 0) {
 cout << ",";
 }
 cout << factors[i];
 }
 cout << "]" << endl;
 return 0;
}
```
This C code computes the factors of a positive integer and returns them as a vector. It uses a for loop to iterate over all possible factors up to the square root of the input number, and checks if each factor divides the input number evenly using the modulo operator. If it does, it adds it to the list of factors. The code also sorts the list of factors in ascending order using the `sort` function from the `` library.

