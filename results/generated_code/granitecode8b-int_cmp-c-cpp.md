Here's the converted code from C to C++:
```
#include 
using namespace std;
int main() {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 
 if (a < b) {
 cout << a << " is less than " << b << endl;
 }
 
 if (a == b) {
 cout << a << " is equal to " << b << endl;
 }
 
 if (a > b) {
 cout << a << " is greater than " << b << endl;
 }
 
 return 0;
}
```
In this converted code, we have used the `iostream` library instead of `stdio.h`. We have also used the `using namespace std;` statement to avoid writing `std::` before standard input and output functions. Additionally, we have added a prompt to ask the user for two integers. Finally, we have used `endl` instead of `n` in the `cout` statements to insert a new line after printing each message.
To test this code, you can compile it with a C++ compiler and run it in your terminal. You should enter two integers when prompted, and the program should output which integer is less than, equal to, or greater than the other based on the comparison result.

