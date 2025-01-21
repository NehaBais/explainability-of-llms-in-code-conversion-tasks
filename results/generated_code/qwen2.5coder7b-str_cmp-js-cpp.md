Here is how you can convert the JavaScript code to C++.

```c++
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "abcd";
    string str2 = "dcba";

    cout << (str1 == str2) << endl; // 0, equivalent to false
    cout << (str1 != str2) << endl; // 1, equivalent to true

    cout << ((int)str1 < (int)str2) << endl; // 1, equivalent to true
    cout << ((int)str1 > (int)str2) << endl; // 0, equivalent to false

    str1 = "ABCD";
    str2 = "abcd";

    cout << (str1.toLowerCase() == str2.toLowerCase()) << endl; // error: 'class std::string' has no member named 'toLowerCase'
    
    transform(str1.begin(), str1.end(), str1.begin(),
            [](unsigned char c){ return tolower(c); });
    transform(str2.begin(), str2.end(), str2.begin(),
            [](unsigned char c){ return tolower(c); });

    cout << (str1 == str2) << endl; // 1, equivalent to true

    string numStr = "123";
    int num = 123;

    cout << (numStr == num) << endl; // error: no match for 'operator==' in 'numStr == num'
    
    int numInt = stoi(numStr); 

    cout << (numInt == num) << endl; // 1, equivalent to true

    return 0;
}
```
Note that:

- In C++, we cannot compare two strings directly using `==` or `!=`. We need to use the `compare()` function of string class. But since this function checks for lexicographical order and not equality of value, we need to use `operator<` and `operator>` instead.

- For case insensitive comparison, C++ Standard Library provides the 'tolower' function in cctype library that can convert a character to its lower case equivalent. The transformed strings can then be compared using `==`.

- To compare numeric string with an integer value, we need to first convert the string to integer using stoi() before comparing.
