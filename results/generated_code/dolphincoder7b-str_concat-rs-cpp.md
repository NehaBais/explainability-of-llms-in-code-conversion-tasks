### Pseudocode:

string s = "Hello"; // Initialize the string variable 's' to "Hello"

// Print the content of the variable 's'
cout << s;

// Concatenate the string " world" to 's', and assign the result to a new variable 's1'
string s1 = s + " world"; 

// Print the content of the variable 's1'
cout << s1;


### Code:
```cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "Hello"; // Initialize the string variable 's' to "Hello"

    cout << s << endl; // Print the content of the variable 's'

    string s1 = s + " world"; // Concatenate the string " world" to 's', and assign the result to a new variable 's1'
    cout << s1 << endl; // Print the content of the variable 's1'
}
```
