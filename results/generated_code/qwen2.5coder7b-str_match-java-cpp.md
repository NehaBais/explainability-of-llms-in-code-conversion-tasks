Here is a C++ version of the Java code:

```C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "abcd";
    string str2 = "ab";

    cout << (str1.find(str2) == 0) << endl;  //Determining if the first string starts with second string

    if(str1.find(str2) != -1)
        cout << true << endl;
    else
        cout << false << endl;

    if(str1.find(str2, str1.find(str2) + 1) != -1)
        cout << true << endl;
    else
        cout << false << endl;

    cout << (str1.rfind(str2) == str1.length() - str2.length()) << endl;  //Determining if the first string ends with the second string

    return 0;
}
```
For the optional requirements, we use the `string::indexOf()` method to find a string in another string. To handle multiple occurrences of a string for part 2, we call indexOf() recursively until it returns -1 (indicating that no further matches are found). To print the location of the match, we simply output the index where the substring was found.

Please note: The C++ `string::indexOf()` method is equivalent to Java's `String.indexOf()`. Also, to get length of string in C++, we use the `size()` or `length()` methods.
