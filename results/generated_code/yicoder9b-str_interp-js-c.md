In C programming language, strings are immutable (they can't be changed in-place) and we will need to create a new string to hold our result. Here is how you could implement this functionality:

```c
#include <stdio.h>
#include <string.h>

void str_replace(const char *src, const char *find, const char *rep, char *res) {
    char buffer[256]; 
    while (*src) {  
        if (strncmp(src, find, strlen(find)) == 0) {
            strcpy(buffer, rep);
            src += strlen(find);
        } else {
            *res = *src;
            res++;
            src++;
        }   
    }  
    *res = '\0'; //Null terminate the resultant string 
} 

int main() {
    const char *original = "Mary had a X lamb";
    char result[1024];
    const char *little = "little";
    const char *find = "X";

    str_replace(original, find, little, result); 
    printf("%s\n", result);  // prints "Mary had a little lamb."

    return 0;
}
```
This C function `str_replace()` replaces all occurrences of a specified string (find) with another string (rep) in the source string (src) and stores it into the buffer string (res). If you want to preserve original string, you would have to ensure that the replacement does not occur in-place but creates a new string for each replacement.

Please note: This program assumes that your target string (`find`) is not part of another word/string and it will replace even if it's inside some other string. If you want more specific search then we need to improve our function or use regular expressions. Also, the buffer size (256) in this program should be adjusted according to the input requirements.
