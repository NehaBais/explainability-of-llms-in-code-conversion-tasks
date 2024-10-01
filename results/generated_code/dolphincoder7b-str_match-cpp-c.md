```c
#include <stdio.h>
#include <string.h>

char s1[] = "abcd";
char s2[] = "abab";
char s3[] = "ab";

int main() {
    int i;
    char *str1 = "Hello, world!";
    char *str2 = "world";

    // 1. Determine if the first string starts with second string
    printf("Startswith: %d\n", strncmp(s1, s3, strlen(s3)) == 0);

    // 2. Determine if the first string contains the second string at any location
    i = strstr(s1, s2) != NULL;
    printf("Contains: %d\n", i);
    
    // 3. Determine if the first string ends with the second string
    char temp[50];
    strcpy(temp, s1 + strlen(s1) - strlen(s2));
    printf("Endswith: %d\n", strcmp(temp, s2) == 0);

    return 0;
}
```

1. The above C program demonstrates the implementation of determining if the first string starts with second string using `strncmp()` and comparing it to zero.
2. The `strstr()` function is used to determine if the first string contains the second string at any location in the given string. If the function returns a non-NULL pointer, then the second string exists within the first string.
3. To check whether the first string ends with the second string, the program concatenates the last `strlen(s2)` characters of the first string to another buffer and compares it with the second string. The `strcmp()` function is used for comparison. If the result is zero, then the two strings are equal and the first string ends with the second string.
