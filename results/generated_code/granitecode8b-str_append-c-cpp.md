Here is the converted code from C to C++:
```
#include 
#include 
int main() {
 std::string str = "Good Morning";
 const char* cstr = " to all";
 const char* cstr2 = " !!!";
 
 // Failure when space allocated to str is insufficient.
 if (str.size() + strlen(cstr) + strlen(cstr2) < str.capacity()) {
 // 1st method
 str += cstr;
 
 // 2nd method
 str += cstr2;
 
 std::cout << str << std::endl;
 }
 
 return 0;
}
```
In C++, the `std::string` class is used instead of the `char` array. The `const char*` variables are also used to represent string literals. The `std::string::size()` and `std::string::capacity()` functions are used to check if there is enough space in the string to perform the concatenation operation, while the `std::string::append()` function can be used for the concatenation operation. Finally, the contents of the variable after the append operation can be displayed using the `std::cout` statement.

