```c
#include <string.h>

int main()
{
    char str1[] = "abcd";
    char str2[] = "ab";

    // Determining if the first string starts with second string
    if (strncmp(str1, str2, strlen(str2)) == 0) {
        printf("The first string starts with the second string.\n");
    } else {
        printf("The first string does not start with the second string.\n");
    }

    // Determining if the first string contains the second string at any location
    if (strstr(str1, str2) != NULL) {
        printf("The first string contains the second string at any location.\n");
        // Printing the location of the match
        printf("The location of the match is %ld.\n", strstr(str1, str2) - str1);
    } else {
        printf("The first string does not contain the second string at any location.\n");
    }

    // Determining if the first string ends with the second string
    if (strncmp(str1 + strlen(str1) - strlen(str2), str2, strlen(str2)) == 0) {
        printf("The first string ends with the second string.\n");
    } else {
        printf("The first string does not end with the second string.\n");
    }

    // Handling multiple occurrences of a string for part 2
    char str3[] = "abab";
    char str4[] = "ab";

    int count = 0;
    char* ptr = str3;
    while ((ptr = strstr(ptr, str4)) != NULL) {
        count++;
        ptr += strlen(str4);
    }

    printf("The string \"%s\" contains \"%s\" %d times.\n", str3, str4, count);

    return 0;
}
```

