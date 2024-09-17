Here is the equivalent C++ code for your provided Go code. This C++ code does exactly the same thing as your Go code. 

It's important to note that in C++, we use `std::cin` instead of `fmt.Scan`. Also, C++ doesn't support comma inside curly brackets ({}) like Golang. So, we have to split it into two lines:
```cpp
    case n1 < n2:
        std::cout << n1 << " less than " << n2 << std::endl;
        break;
```
And the complete C++ code is as follows:
```cpp
#include<iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    switch(n1 - n2) {
        case 1: 
            cout << n1 << " is less than " << n2 << "." << endl;
            break;
        case 0: 
            cout << n1 << " is equal to " << n2 << "." << endl;
            break;
        case -1: 
            cout << n1 << " is greater than " << n2 << "." << endl;
            break;
    }

    return 0;
}
```
