In C programming language, string comparison is done using the `strcmp` function from the `string.h` library. The `strcmp` function returns an integer less than, equal to, or greater than zero if the string pointed to by `a` is found, respectively, to be less than, to match, or be greater than the string pointed to by `b`. For case insensitive comparison, we use `stricmp`(in windows) or `strcasecmp` (in Linux/Unix) from `string.h` library.

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void compare(char* a, char* b){
    printf("\n%s is of type %d and %s is of type %d\n", 
           a, (int)strlen(a), 
           b, (int)strlen(b));

    if (strcmp(a, b)<0) printf("%s is strictly less than  %s\n", a, b);
    if (strcmp(a, b)>=0) printf("%s is greater than or equal to %s\n", a, b);
    if (!strcmp(a,b))   printf("%s is equal to %s\n", a, b);  // strcmp returns 0 if strings are same. So negating it gives case of inequality.
    if (strcmp(a,b))    printf("%s is not equal to %s\n", a, b); // Any non-zero value from strcmp indicates inequality.
}

int case_insensitive_compare(const char* a, const char* b) {
    while(*a && *b){
        if(tolower(*a) != tolower(*b)) break;
        a++; b++;
    }
    return (tolower(*a)-tolower(*b));
}

int main() {
   compare("YUP", "YUP");
   compare("BALL", "BELL");
   //Note: in C, numeric strings are compared lexically
   compare("24", "123");
   return 0;
}
```
