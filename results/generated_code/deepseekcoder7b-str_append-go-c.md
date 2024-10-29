The equivalent C code would look like this:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "foo"; // string variable with an initial value of 'foo'
    strcat(s, "bar");     // appending the string 'bar' to our original string
    printf("%s", s);       // printing out the resulting string
    return 0;
}
```
This code first creates a character array `s` and initializes it with the value of "foo". Then, it uses the `strcat()` function from the standard string library in C to append the string "bar" to our original string. Finally, it prints out the resulting string using `printf()`.

Please note that strings in C are a bit tricky. In C language arrays of characters (char[]) do not terminate with a special character like '\0' at the end indicating the end of the string as you would expect from languages like Go, Python or Java. This means they can hold arbitrary sequences of characters and it's your responsibility to keep them within bounds and properly null-terminated yourself.

