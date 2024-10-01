The following code is the equivalent in C for your given C++ code snippet:

```c
#include <string.h>
#include <stdio.h>

int main() {
    char s1[5] = "abcd";
    char s2[5] = "abab";
    char s3[3] = "ab";

    // Beginning
    int start_with_ab = strncmp(s1, s3, strlen(s3))) ? 0 : 1;
    // End

    // Anywhere 
    int contains_ab = strstr(s2, s3) != NULL ? 1 : 0;

    // Ends with ab
    int ends_with_ab = (strncmp(s1 + strlen(s1) - strlen(s3), s3, strlen(s3))) == 0)? 1: 0;


	printf("Does '%s' start with '%s'? %d\n", s1, s3, start_with_ab);
	printf("Does '%s' contain '%s' at any location? %d\n", s2, s3, contains_ab);
	printf("Does '%s' end with '%s'? %d\n", s1, s3, ends_with_ab);

    return 0;
}
```
This program takes in three strings `s1`, `s2` and `s3`. Then it uses the C string library to compare the first string with the second string at different positions. It determines if the first string starts with the second string, if the first string contains the second string at any location, and if the first string ends with the second string. The results are then printed out on the console.
