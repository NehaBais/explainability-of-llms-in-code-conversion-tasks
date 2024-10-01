```
#include <stdio.h>
#include <string>

int main() {
    std::string s = "foo";
    s += "bar";
    printf("%s\n", s.c_str());
    return 0;
}
```
The code above is the equivalent of the Golang code in C.
In Golang, we use the strings package to create a strings.Builder object and append strings to it using WriteString(). The resulting string is then printed using fmt.Print().
In C, we use std::string to create a string variable and append another string literal to it using += operator. The resulting string is then printed using printf() function.
