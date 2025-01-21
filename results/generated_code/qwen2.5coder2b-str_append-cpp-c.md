```c
#include <stdio.h>
#include <string.h> // Included for strcat function

int main() {
    char greeting[30]; // Create a string variable with size 30
    strcpy(greeting, "Hello"); // Initialize the string to 'Hello'
    strcat(greeting, " , world!"); // Append the string literal " , world!" to greeting
    printf("%s\n", greeting); // Print the modified greeting
    return 0;
}
```
