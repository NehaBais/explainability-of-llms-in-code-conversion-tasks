In C, you can use `sprintf()` function from stdio.h to concatenate (append) strings in an idiomatic way. Here's how it would look like for the given JavaScript code snippet:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello";  // string variable equal to any text value
    
    strcat(s1, ", World!");  // appending another string literal in the most idiomatic way
  
    printf("%s\n", s1);  // show contents of the variable after append operation

    return 0;
}
```

`strcat()` function is used to concatenate (append) one string to another. It takes two parameters: destination (the string which receives the content), and source (string that is appended). `%s` format specifier in printf statement is used for printing C-strings. The program will output "Hello, World!" as expected after executing this code snippet.

