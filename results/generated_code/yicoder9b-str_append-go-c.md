In C, there is no need to use a `strings.Builder` as in Go. You can directly use the string functions provided by C language. Here's how you could write it:

```c
#include <stdio.h> 
#include <string.h> 
  
int main() {
    char s[100] = "foo"; // create a string variable
   
    // append another string to the first string
    strcat(s, "bar");
  
    // print the contents of the updated string
    printf("%s\n", s); 
  
    return 0;
}
```

In this C code:
- The `char` type is used to declare a string.
- The `strcat()` function is used to append (concatenate) another string onto the first one. This is similar to using the `WriteString()` function in Go.
- Finally, we print out the contents of our updated string variable with `printf("%s\n", s);`.
