The equivalent C++ code would be as follows:

First, since in Rust we have `Add` trait to concatenate strings but in C++ string appending is done using the '+' operator or += method. Here is the idiomatic way of doing it in both cases - 
```c++
#include <iostream>
#include<string>
using namespace std;

int main() {
    string hello = "Hello world";
    
    // Append a string literal with += operator.
    hello += "!!!";
    cout << hello << endl;
  
    return 0;
}
```

In the above C++ code, we are using '+=' operator to append another string to `hello` string object. The final output will be "Hello world!!!".

