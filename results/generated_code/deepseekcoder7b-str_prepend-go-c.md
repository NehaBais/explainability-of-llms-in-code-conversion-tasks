Sure, here's how you can do this in C programming language by using `strcat()` and `strcpy()` functions for string concatenation and copying respectively.

Here is the equivalent code in C:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char s[20] = "world!"; // Creating a character array (string) with value 'world!'
    
    char prepend[] = "Hello, ";  // String to be prepended
    int len1 = strlen(s);   // Length of the original string
    int len2 = strlen(prepend);  // Length of the string to prepend
    
    /* Making space for concatenation */
    char newString[len1 + len2 + 1];
        
    /* Copying first string in newly created string*/
    strcpy(newString, prepend);
  
    /* Appending second string to the newly created string*/
    strcat(newString, s); 
    
    printf("%s\n", newString); // Prints "Hello, world!"
        
    return 0;
}
```
This program creates a character array (string) `s` with initial value "world!", then it concatenates string literal "Hello, " to the start of this string. The result is printed out in console.

