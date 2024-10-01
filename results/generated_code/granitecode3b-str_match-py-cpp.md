Here's the C++ code that implements the string matching operations requested in the Python code:
```c++
#include 
using namespace std;
 
int main() {
 string str1 = "abcd";
 string str2 = "ab";
 int loc = 0;
 
 // Part 1: Determine if str1 starts with str2
 cout << "Does " << str1 << " start with " << str2 << "?: " << (str1.find(str2) != string::npos) << endl;
 
 // Part 2: Determine if str1 contains str2 at any location
 loc = str1.find(str2);
 while (loc != string::npos) {
 cout << "Found substring '" << str2 << "' at position " << loc << endl;
 loc = str1.find(str2, loc + 1);
 }
 
 // Part 3: Determine if str1 ends with str2
 cout << "Does " << str1 << " end with " << str2 << "?: " << (str1.rfind(str2) != string::npos) << endl;
 

 return 0;
}
```
This code uses the `find()` and `rfind()` member functions of the `string` class to perform the string matching operations. The `find()` function returns the position of the first occurrence of str2 in str1, or `string::npos` if str2 is not found. The `rfind()` function returns the position of the last occurrence of str2 in str1, or `string::npos` if str2 is not found. 
The code then uses a while loop to iterate through all occurrences of str2 in str1 and print their positions. 
Note that the C++ string matching functions are case-sensitive by default, so they will only match exact substrings. If you want to perform case-insensitive matching, you can use the `nocase_find()` function instead, which is also part of the `string` class.

