Sure! Here is the equivalent C++ code for your provided C code:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create a string variable equal to any text value.
    string s = "hello";
    cout << s << endl; 

    //Create another string variable whose value is the original variable concatenated with another string literal.
    string s2 = s + " literal";  
    cout << s2 << endl;
}
```

In this C++ code, we are using `std::string` instead of `char *` for creating strings. The '+' operator is used to concatenate the string which was not available in C. 

Also, unlike C where we have to manage memory manually (using malloc(), strcpy() etc), in C++ this is managed automatically so you do not need to `free(s2)` in the end as it was needed in your original C code.
