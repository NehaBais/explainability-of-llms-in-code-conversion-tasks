Here's the C++ code that implements the three types of string matching using the `string` class from the standard library:
```cpp
#include 
using namespace std;
int main() {
 string str1 = "abcd";
 string str2 = "ab";
 
 bool result1 = (str1.find(str2) != string::npos);
 cout << "Does " << str1 << " start with " << str2 << "?: " << result1 << endl;
 
 bool result2 = (str1.find(str2) != string::npos);
 cout << "Does " << str1 << " contain " << str2 << "?: " << result2 << endl;
 
 bool result3 = (str1.rfind(str2) != string::npos);
 cout << "Does " << str1 << " end with " << str2 << "?: " << result3 << endl;
 
 return 0;
}
```
In this code, we first create two `string` objects: `str1` and `str2`. We then use the `find()` method to determine if `str1` starts with `str2`. The `rfind()` method is used to determine if `str1` ends with `str2`, and the `contains()` method is used to determine if `str1` contains `str2` at any location.
Note that we use the `!= string::npos` condition to check if a match was found. If the result of the `find()` or `rfind()` method is not equal to `string::npos`, it means that a match was found. If the result is equal to `string::npos`, it means that no match was found.
We also use the `indexOf()` method to determine if `str1` contains `str2` at any location. The `indexOf()` method takes two arguments: the substring to search for and an optional starting index. By default, the starting index is 0, but we can use a second argument to specify a different starting index.
In this example, we use the `indexOf()` method twice. The first call to `indexOf()` searches for "ab" in "abab". Since "ab" appears at the beginning of "abab", the result is not equal to `string::npos`. The second call to `indexOf()` searches for "ab" starting from the index returned by the previous call to `indexOf()`. This ensures that we search for multiple occurrences of "ab" in "abab".

