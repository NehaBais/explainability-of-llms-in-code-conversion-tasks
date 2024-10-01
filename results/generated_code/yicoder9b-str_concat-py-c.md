In C programming language, strings are represented as character arrays and concatenation can be done using the `strcat` function from string library in a loop. Here is an equivalent code to your Python script:

```c
#include <stdio.h>
#include <string.h>
  
int main() {
    char s1[20] = "hello";
    printf("%s world\n", s1);

    char s2[20];
    strcpy(s2, s1);
    strcat(s2, " world");
    printf("%s\n", s2);
  
    char s3[50] = "hello";
    strcat(s3, " world mom");
    printf("%s\n", s3);
    
    return 0;
}
```
Note: The size of character array should be large enough to hold the concatenated string. For example, if you are appending two strings each less than 10 characters, it's safe to allocate a 20-character array.
