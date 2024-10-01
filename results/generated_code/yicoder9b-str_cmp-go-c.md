The following code converts the Golang string comparison code to C language: 

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char c[] = "cat";
    char d[] = "dog";

    if(strcmp(c,d) == 0){
        printf("%s is bytewise identical to %s\n", c, d);
    }
    else{
        printf("%s is bytewise different from %s\n", c, d);
    }
  
    if(strcmp(c,d) > 0){
        printf("%s is lexically greater than %s\n", c, d);
    }
    else if (strcmp(c,d) < 0){
        printf("%s is lexically less than %s\n", c, d);
    }  

    if(strcasecmp(c,d) == 0){
        printf("%s equal to %s when interpreted as UTF-8 and compared under Unicode simple case folding rules.\n", c, d);
    }
    else{
        printf("%s not equal to %s when interpreted as UTF-8 and compared under Unicode simple case folding rules.\n", c, d);
    }
  
    return 0;
}
```

Note: `strcmp` compares two strings lexicographically which is a case sensitive comparison. The return value is an integer less than, equal to, or greater than zero if s1 (or the portion thereof matching s2) is found, respectively, to be less than, to match exactly, or be greater than s2.

`strcasecmp` compares two strings ignoring differences in case. This function does a case-insensitive comparison by converting both strings to lowercase first and then comparing them. 

For numeric string comparisons, C treats the string as an ASCII string, not as numbers. The result of the lexicographical comparison will be based on their ASCII values, hence "10" is considered smaller than "2" because '1' comes before '2' in ASCII table.
