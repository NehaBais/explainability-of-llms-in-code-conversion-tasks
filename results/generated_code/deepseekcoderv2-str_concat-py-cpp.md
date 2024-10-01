## Answer:
In C++, we can do the following to create a string variable equal to any text value and concatenate it with another literal string. We can also use the join() function from <string> header file to achieve the same result as in Python code.
```
#include <iostream>
#include <string>
using namespace std;
int main(){
    // Creating a String variable "s1" equal to any text value
    string s1 = "hello";
    
    // Concatenating the original variable with another literal string
    cout << (s1 + " world") << endl;
    
    // Using join() function to concatenate the string variables
    string strArr[3] = {"hello", "world", "mom"};
    string s2 = std::string(", ").join(strArr, 3);
    cout << s2 << endl;
    return 0;
}
```
