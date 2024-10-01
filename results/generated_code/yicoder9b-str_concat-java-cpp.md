Sure, here is the equivalent C++ code:

```cpp
#include <iostream>
#include <string> 
using namespace std;

int main(){
    string s = "hello";
    cout << s + " literal" << endl;
    string s2 = s + " literal";
    cout << s2 << endl;
    return 0;
}
```
In this C++ code, we use the `<iostream>` library for input/output operations and `<string>` library to work with strings. The `using namespace std` statement is used to avoid writing `std::` before string, cout etc each time.

The main function works just like in Java, it has a block of code that executes when the program starts. The body of this function consists of declaring and initializing two strings - 's' and 's2'. We then output these using `cout` (standard output stream) which is similar to `System.out.println()` in Java.
