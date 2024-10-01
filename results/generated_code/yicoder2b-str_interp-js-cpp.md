Sure, here is how you can implement this in C++.
```cpp
#include <string> 
using namespace std;

int main() {
    string original = "Mary had a X lamb";
    string little = "little";
    // The replace function replaces 'X' with 'little' in the string
    original.replace(15, 3, little);
    cout << original << endl;  // Outputs: "Mary had a little lamb"
    return 0;
}
```
This code will change the value of "X" to "little" in the string `original` and print it out. Keep in mind that C++ strings are indexed from 0, so we are replacing "X" with "little" which is at position 15 of the string.
