Here is a C version of the code:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcd";
    char str2[] = "ab";
    printf("%d\n", strstr(str1, str2) != NULL); //Part 1 - startsWith

    char str3[] = "zn";
    printf("%d\n", strchr(str1, *str3) == NULL); //Part 2 - endsWith

    char str4[] = "abab";
    char substring[] = "bb";
    if (strstr(str4, substring)) {
        printf("True\n"); //Part 3 - contains
    } else {
        printf("False\n");
    }

    substring[0] = 'a'; //Handle multiple occurrences
    char* pos;
    pos = strstr(str4, substring);
    while (pos != NULL) {
        printf("%d\n", pos - str4);
        pos++;
        pos = strstr(pos, substring);
    }

    return 0;
}
```

This C code does the following:

1. `printf("%d\n", strstr(str1, str2) != NULL); //Part 1 - startsWith` checks if str1 contains str2 as a prefix. It uses the strstr function to find the first occurrence of the substring in str1 and then checks whether this pointer is NULL or not.

2. `printf("%d\n", strchr(str1, *str3) == NULL); //Part 2 - endsWith` checks if str1 contains str3 as a suffix. It uses the strchr function to find the first occurrence of str3 in str1 and then checks whether this pointer is NULL or not.

3. `if (strstr(str4, substring)) { //Part 3 - contains` checks if str4 contains substring. It uses the strstr function to find the first occurrence of substring in str4.

4. The while loop finds subsequent occurrences of substring in str4 and prints their positions.
