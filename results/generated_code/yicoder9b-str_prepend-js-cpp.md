In C++ you can use the `insert()` function to achieve this. Here is how it would look: 

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create a string variable and set any text value.
    string s = ", World";
    
    // Prepend the string variable with another string literal.
    s.insert(0, "Hello"); 

    // Print out result
    cout << s << endl;

    return 0;
}
```
