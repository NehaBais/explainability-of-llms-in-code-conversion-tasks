The equivalent C code would be as follows:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "abc";
    printf("%s\n", string);
    
    // strcat function to append the string
    strcat(string, "def"); 
  
    printf("%s\n", string);
}
```
In C, we use the `strcat` function from the string.h library to concatenate two strings. Also note that in Java, String is an object and you can perform operations like appending with '+' operator, but in case of other data types (like char[]), this operation doesn't make sense in C as well.

