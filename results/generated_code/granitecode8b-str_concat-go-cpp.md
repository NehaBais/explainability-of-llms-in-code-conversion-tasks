Here is the C++ code that fulfills the requirements of the task description:
```cpp
#include 
#include 
int main() {
 // text assigned to a string variable
 std::string s = "hello";
 
 // output string variable
 std::cout << s << std::endl;
 
 // this output requested by original task description, although
 // not really required by current wording of task description.
 std::cout << s + " literal" << std::endl;
 
 // concatenate variable and literal, assign result to another string variable
 std::string s2 = s + " literal";
 
 // output second string variable
 std::cout << s2 << std::endl;
 return 0;
}
```
The output of the program is:

hello
hello literal
hello literal

Note that in C++, we need to include the `` and `` headers to use the `std::string` type and the `std::cout` function, respectively. Also, we need to use the `<<` operator to print the string variables instead of `println`.

