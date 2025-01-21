The error in the code is that it uses the `parseInt()` function from JavaScript to convert the command-line arguments to integers, but in C++, this function is not available. The fix is to use the `stoi()` function from the `<string>` library instead, which is equivalent to `parseInt()` in JavaScript and can be used to convert a string to an integer.
The corrected code is as follows:
```cpp
#include
#include
using namespace std;
int main(int argc, char *argv[]) {
  int a = stoi(argv[2]);
  int b = stoi(argv[3]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division =
      static_cast(a) /
      static_cast(b); // Note that C++ uses floating-point division by default
  int remainder = a % b;

  cout << "a + b = " << sum << endl;
  cout << "a - b = " << difference << endl;
  cout << "a * b = " << product << endl;
  cout << "a / b = " << division
       << endl; // Note that the quotient is a floating-point number
  cout << "a % b = " << remainder << endl;

  return 0;
}
```
In this code, we first include the necessary header files `<iostream>` and `<string>`. We then use the `using namespace std;` statement to avoid having to prefix standard library functions with `std::`. Inside the `main()` function, we use the `stoi()` function from the `<string>` library to convert the command-line arguments to integers.
We then perform the required arithmetic operations on the integers and store the results in variables. The division operation is performed as a floating-point operation by default in C++, so the quotient is stored as a double. Finally, we use the `cout` statement to print the results to the console.

