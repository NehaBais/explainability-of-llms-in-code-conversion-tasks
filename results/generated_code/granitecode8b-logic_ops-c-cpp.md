Here's the converted code in C++:
```
#include 
using namespace std;
void print_logic(bool a, bool b) {
 cout << "a and b is " << (a && b) << endl;
 cout << "a or b is " << (a || b) << endl;
 cout << "not a is " << (!a) << endl;
}
int main() {
 // Test the function with some sample inputs
 print_logic(true, true);
 print_logic(false, true);
 print_logic(true, false);
 print_logic(false, false);
 return 0;
}
```
The main difference between C and C++ is that in C++, logical values are represented using the `bool` data type, which can only have two possible values: `true` or `false`. Additionally, the logical operators (`&&`, `||`, and `!`) have been overloaded to work with these boolean values. 
In this converted code, I've also added a `using namespace std;` statement at the top to avoid having to type `std::` before every cout statement. This is not necessary in C++, but it can be useful for readability purposes.

