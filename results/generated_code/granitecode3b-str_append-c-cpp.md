Here's the C++ code that achieves the same functionality as the given C code:
```
#include 
using namespace std;
 
int main() {
 string str = "Good Morning";
 string cstr = " to all";
 string cstr2 = " !!!";
 int x = 0;
 
 if (str.length() > str.size() + cstr.size() + cstr2.size()) {
  // Failure when space allocated to str is insufficient.

  // 1st method
  str += cstr;

  // 2nd method
  x = str.size();
  str.insert(x, cstr2);
  
  cout << str << endl;
 }
 
 return 0;
}
```
The C++ code uses the `string` class to store and manipulate strings, which provides a more robust and idiomatic way to work with text data than the C `char*` array. The `+=` operator concatenates two strings together into a single string, while the `insert()` method inserts a substring into a string at a specified position. Both methods achieve the same result as the given C code, but they use more idiomatic and modern C++ features.

