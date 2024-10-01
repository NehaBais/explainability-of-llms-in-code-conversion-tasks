The JavaScript to C conversion code can be as follows:

```C
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areEqual(char* str1, char* str2){
    return strcmp(str1, str2) == 0;
}

int areNotEqual(char* str1, char* str2){
    if (areEqual(str1, str2)) {
        return 0; // Strings are equal
    } else {
        return 1; // Strings are not equal
    }
}

int isLexicographicallyBefore(char* str1, char* str2){
    if (strcmp(str1, str2) < 0)) {
        return 1; // String str1 is lexicographically ordered before string str2
    } else {
        return 0; // String str2 is lexicographically ordered before string str1
    }
}

int isLexicographicallyAfter(char* str1, char* str2){
    if (strcmp(str1, str2) > 0)) {
        return 1; // String str1 is lexicographically ordered after string str2
    } else {
        return 0; // String str2 is lexicographically ordered after string str1
    }
}

int main(){
    char str1[5] = "abcd";
    char str2[5] = "dcba";

    printf("Are the strings equal? %d\n", areEqual(str1, str2)));
    printf("Are the strings not equal? %d\n", areNotEqual(str1, str2))));
    printf("Is string '%s' lexicographically ordered before string '%s'? %d\n", str1, str2, isLexicographicallyBefore(str1, str2)))));
    printf("Is string '%s' lexicographically ordered after string '%s'? %d\n", str1, str2, isLexicographicallyAfter(str1, str2))));

    return 0;
}
```

This C code demonstrates how to compare two strings and achieve a lexical comparison. The code includes functions for comparing exact equality, inequality, lexical ordering before, and lexical ordering after the two strings. The main function calls these functions with sample strings and prints the results.
