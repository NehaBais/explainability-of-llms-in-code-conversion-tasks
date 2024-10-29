Below is your requested C++ code equivalent to provided Golang code, demonstrating the mentioned requirements in C++ as well:

```c++
#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;
  
int main() 
{ 
    string c = "cat";
    string d = "dog";
    
    // Comparing for exact equality.
    if (c == d) {
        cout << c << " is bytewise identical to " << d << endl;
    }
  
    // Comparing for inequality.
    if (c != d) {
        cout << c << " is bytewise different from " << d << endl;
    } 
    
    // Lexical comparison.
    if (c > d) {
        cout << c << " is lexically bytewise greater than " << d << endl;
    } else {
        cout << c << " is not lexically bytewise greater than " << d << endl;
    }  
    
    // Case insensitive string comparison.
    if (equal(c.begin(), c.end(), d.begin(), 
              [](char a, char b) { return tolower(a) == tolower(b); }))
        cout << "Case-insensitive: strings are equal" << endl;
    else
        cout << "Case-insensitive: strings are not equal" << endl; 
    
  
    // Numeric strings comparison. They will be lexically ordered even if they're not numerics.
    string e = "123";
    string f = "456";
    
    if (e > f) {
        cout << e << " is lexically greater than " << f << endl;
    } 
  
    return 0; 
}
```
In the above C++ code, `equal` function of STL library along with a lambda function are used to achieve case-insensitive string comparison. Lexical comparison in all languages works byte by byte and not character by character as there is no concept like grapheme clusters or words in ASCII characters. For numeric strings, they will be compared lexically even if they're not numeric.

