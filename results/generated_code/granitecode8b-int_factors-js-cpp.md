Here is the C++ code that computes the factors of a positive integer. The code uses a for loop to iterate over all possible factors from 1 to the square root of the input number. It checks if each factor divides the input number evenly and adds it to the list of factors if it does. Finally, it sorts the list in ascending order and returns it.
```c++
#include 
#include 
#include 
using namespace std;
vector factors(int num) {
 vector n_factors;
 for (int i = 1; i <= sqrt(num); i++) {
 if (num % i == 0) {
 n_factors.push_back(i);
 if (i != sqrt(num)) { // avoid adding duplicate factors
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
 cout << "[";
 for (int i = 0; i < factors.size(); i++) {
 cout << factors[i];
 if (i != factors.size() - 1) {
 cout << ", ";
 }
 }
 cout << "]" << endl;
 return 0;
}
```

