In C, you can achieve this by using string concatenation using the '+' operator. Here is how you can modify your code:

```C
#include <stdio.h>
int main() {
    char string[100]; // Assuming string length to be 99 characters
    sprintf(string, "abc", "def"); // Using sprintf function to concatenate strings
    printf("%s\n", string);
    return 0;
}
```
This program uses the `sprintf` function from standard library which takes a character array and variable number of arguments. It concatenates the two given strings and stores the result in the character array. Finally, it prints the concatenated string.
