In C++, we can use the `std::string` class instead of using character arrays and functions like strcat(), sprintf() etc. Here is the equivalent code in C++.

```cpp
#include <iostream>
#include <cstring>

int main(){
    std::string str = "my String";  //create a string variable equal to any text value
    const char *cstr = "Changed ";   //prepend the string with another string literal
    
    str.insert(0, cstr);              //append cstr at the beginning of str
    
    std::cout << str;                 //print str
      
    return 0;
}
```
In this code we are using the `std::string` class methods like insert() that allows us to prepend a string literal to another one. The const char * data type is used for representing C-style strings in C++, such as "Changed ".

