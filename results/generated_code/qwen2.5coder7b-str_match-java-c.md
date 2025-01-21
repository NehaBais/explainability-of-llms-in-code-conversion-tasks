Here is a simple implementation of the required functionality in C. 

```C
#include <stdio.h>
#include <string.h>

int startswith(char* str, char* substr){
    if (strstr(str, substr) == str)
        return 1;
    else
        return 0;
}

int contains(char* str, char* substr){
    if (strstr(str, substr) != NULL)
        return 1;
    else
        return 0;
}

int endswith(char* str, char* substr){
    int len1 = strlen(str);
    int len2 = strlen(substr);

    if (len1 < len2)
        return 0;

    for(int i=0; i<len2; i++)
        if (*(str+len1-len2+i) != *(substr+i))
            return 0;
    
    return 1;
}

int indexOf(char* str, char* substr){
    return strstr(str, substr) - str;
}

int main() {
    printf("%d\n", startswith("abcd", "ab")); // prints 1
    printf("%d\n", endswith("abcd", "zn")); // prints 0
    printf("%d\n", contains("abab", "bb")); // prints 0
    printf("%d\n", contains("abab", "ab")); // prints 1

    char* str = "abab";
    char* substr = "ab";
    int loc = indexOf(str, substr);
    
    while (loc != -1) {
        printf("Location: %d\n", loc); 
        loc = indexOf(str+loc+1, substr);
    }
    
    return 0;
}
```
This C program includes five functions for string operations: `startswith()`, `contains()`, `endswith()`, and `indexOf()`. The `main()` function demonstrates the functionality of these functions. For part 2 of optional requirement, it prints all occurrences of a substring in a string using a loop.

Please note that C doesn't have native string comparison functionality as java does, so we need to manually check for equality character by character. Also, unlike Java's `indexOf()` method which returns -1 if the substring is not found, `strstr()` function in C returns NULL if the substring is not found. This implementation takes advantage of these differences.
