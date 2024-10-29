In C++, the string class is used for handling strings and it offers more features than in C. Here is how you can achieve similar functionality as provided above using the std::string class:

```cpp
#include <iostream>
#include <string>
int main() {
    // Create a string variable equal to any text value
    std::string str("Good Morning"); 
    
    // Append the string variable with another string literal
    str += " to all"; // equivalent of cstr in C
    str += " !!!";   // equivalent of cstr2 in C

    // Show the contents of the variable after append operation
    std::cout << str << std::endl;
}
```
In this code, we are creating a string object 'str' with initial value "Good Morning". After that, to concatenate two more strings "to all" and "!!!" to it. And at last printing the content of the variable after append operation using cout from iostream library. We can see the output as: "Good Morning to all!!!"

