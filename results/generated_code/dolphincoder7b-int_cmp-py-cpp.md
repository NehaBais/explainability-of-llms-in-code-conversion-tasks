This problem involves creating a Python script that takes two integers from the user, and then compares them using different conditions. Here's how I would translate it into C++:

```cpp
#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    if (a < b)
        cout << "a is less than b" << endl;
    else if (a > b)
        cout << "a is greater than b" << endl;
    else if (a == b)
        cout << "a is equal to b" << endl;
    
    return 0;
}
```

In C++, we use the `std::cin` and `std::cout` libraries for taking inputs from user and displaying outputs, respectively. Also, since the code doesn't take arguments, I have omitted main function declaration in this translation. Let me know if you need any more assistance or clarification!
