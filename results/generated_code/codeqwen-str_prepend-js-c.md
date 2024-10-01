In C programming language, there is no direct equivalent of JavaScript's '+' operator for strings. However, you can achieve the desired functionality by using string concatenation functions like strcat() from <string.h> library. Here is how to convert your requirement into C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[50]=", World";
    strcpy(s+strlen(s), "Hello"); // Copies the string "Hello" to s starting from the next character of current length of s.
    printf("%s", s);
    return 0;
}
```

This program first creates a variable 's' and initializes it with ", World". Then it uses strcpy() function to append "Hello" at the end of the string 's'. The function appends strings in such a way that the second argument's characters are copied over starting from the position where '\0' character is found. 

Finally, it prints the modified 's' which now holds "Hello, World".
Note: Please note this code assumes that length of the string 's' + "Hello" will not exceed its size (50 in this case). If it exceeds, you might need to dynamically allocate memory for 's'.
