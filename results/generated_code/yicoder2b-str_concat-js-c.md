Sure, here's how you can convert that JavaScript code into C. 

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[10] = "hello";  //String variable s initialized with a text value of 'hello'
    strcat(s, " there!"); //Concatenates another string literal into the variable s
    printf("%s\n", s);   //Prints out the content of the variable s 
    return 0;           //Ends the program execution
}
```
This C code does exactly the same task as JavaScript. It declares a string variable `s` and assigns it a value (`hello`). Then it appends another string to the end of this variable, `" there!"`. Finally it prints out its contents. 

Note that we're using strcat function from string.h library in C for joining two strings. Also, in C arrays must be manually sized and we use "%s" specifier for printing strings to avoid runtime errors.
