This is the equivalent C++ code for the given Golang program. Note that we are using `std::cout` instead of `fmt.Print()` and `scanf()` instead of `fmt.Scan()` in order to print and get input from the user. 

```c++
#include<iostream>
using namespace std;
int main() {
	int n1, n2;
	cout << "Enter first number: ";
	cin >> n1;
	cout << "Enter second number: ";
	cin >> n2;
	if (n1 < n2) 
		cout << n1 << " is less than " << n2 << endl;
	else if (n1 == n2)
		cout << n1 << " is equal to " << n2 << endl;
	else 
		cout << n1 << " is greater than " << n2 << endl;
    return 0;
}
```
This program gets two integers from the user, and checks if the first integer is: - less than, equal to, or greater than the second integer.
