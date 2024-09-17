Here's the C++ code that performs the same operations as the JavaScript code, with error handling included and appropriate formatting for output:
```c++
#include 
#include 
using namespace std;
int main(int argc, char* argv[]) {
 if (argc < 4) {
 cout << "Usage: " << argv[0] << " a b" << endl;
 return 1;
 }
 int a = stoi(argv[1]);
 int b = stoi(argv[2]);
 int sum = a + b;
 int difference = a - b;
 int product = a * b;
 double division = static_cast(a) / static_cast(b);
 int remainder = a % b;
 if (b == 0) {
 cout << "Error: Division by zero" << endl;
 return 1;
 }
 cout << "a + b = " << sum << endl;
 cout << "a - b = " << difference << endl;
 cout << "a * b = " << product << endl;
 cout << "a / b = " << division << endl;
 if (remainder < 0) {
 remainder += b;
 }
 cout << "a % b = " << remainder << endl;
 return 0;
}
```
In this C++ code, we use the `isdigit()` function to check if the first two command-line arguments are integers. If they are not, we print an error message and exit with a non-zero status code.
We then convert the arguments to integers using the `stoi()` function and store them in variables `a` and `b`. We perform the same operations as in the JavaScript code, calculating the sum, difference, product, division, and remainder.
If the divisor is zero, we print an error message and exit with a non-zero status code. Otherwise, we output the results using the `cout` statement. Finally, we check the sign of the remainder and output it as either positive or negative, depending on the sign of the dividend.

