Here is a C version of the code:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcd";
    char str2[] = "ab";
    if(strncmp(str1, str2, strlen(str2)) == 0)
        printf("String %s starts with string %s\n", str1, str2);

    str2[0] = 'z';
    if(strstr(str1, str2) == NULL)
        printf("String %s does not contain string %s\n", str1, str2);
    else {
        char *ptr = strchr(str1, 'z');
        while (ptr != NULL) {
            printf("Found match at index: %d\n", ptr - str1);
            ptr++;
            ptr = strstr(ptr, "b");
        }
    }

    str2[0] = 'a';
    if(strcmp(str1 + strlen(str1) - strlen(str2), str2) != 0)
        printf("String %s does not end with string %s\n", str1, str2);
    else {
        char *ptr = strchr(str1, 'A');
        while (ptr != NULL) {
            printf("Found match at index: %d\n", ptr - str1);
            ptr++;
            ptr = strstr(ptr, "a");
        }
    }

    return 0;
}
```
In this C code, we use the following functions to perform the same operations as the Python code.

- `strncmp()`: It compares two strings up to a specified number of characters. If str1 starts with str2, it returns 0.

- `strchr()`: It searches for the first occurrence of a character in a string and returns a pointer to that position.

- `strstr()`: It searches for the first occurrence of a substring in a string and returns a pointer to that position. If str1 contains str2 at any location, it prints all occurrences.

- `strcmp()`: It compares two strings and returns 0 if they are equal.
