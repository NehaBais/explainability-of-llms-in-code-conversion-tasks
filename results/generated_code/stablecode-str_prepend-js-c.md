Here is the JavaScript code converted into C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "World"; // Initialize string variable

    // Prepend the string variable with another string literal
    strcpy(s, "Hello");
    strcat(s, " "));  //Append a space character
    strcat(s, "!\n"));  // Append an exclamation mark followed by newline (to ensure output in a new line))

    printf("%s", s); // Print the resulting string

    return 0;
}
```
This program will initialize a string variable `s` with the value "World". It then modifies this initial string to prepend it with the string literal "Hello ". The result is the concatenation of these two string literals - namely, "Hello World" (the spaces are included because we use `strcat()`, which adds characters from one string to another string, without removing existing characters in the destination string)). 

The resulting string, i.e., "Hello World", is then printed to the console.
