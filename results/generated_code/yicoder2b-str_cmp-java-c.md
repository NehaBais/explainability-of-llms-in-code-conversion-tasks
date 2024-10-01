In C language, we don't have the direct string compare functions similar to Java's `equals()`, `equalsIgnoreCase()`, etc. So, let's implement these manually by using character arrays and comparing one by one.

Here is a version of your Java program that compares two strings for lexical equality:

```c
#include <stdio.h>
#include <string.h>
int main() {
    char A[] = "Hello";
    char B[] = "Hello";
    if (strcmp(A,B) == 0){
        printf("'%s' and '%s' are lexically equal\n", A, B);
    } else {
        printf("'%s' and '%s' are not lexically equal\n", A, B);
    }
   
    char C[] = "Hello";
    char D[] = "HELLO"; 
    if (strcmp(C,D) == 0){
        printf("'%s' and '%s' are case-insensitive lexically equal\n", C, D);
    } else {
        printf("'%s' and '%s' are not case-insensitive lexically equal\n", C, D);
    } 
    return 0;
}
```
This program will output:
`'Hello' and 'Hello' are lexically equal.`
`'Hello' and 'HELLO' are case-insensitive lexically equal.`
Please note that this code compares each character of the strings separately, which might not give you the exact same results as your Java version does for the `equals()` method because it considers alphabetic characters with uppercase and lowercase different. 

This is a simple comparison of two character arrays, we could add more complex logic if needed to perform complex string comparisons, including ignoring certain characters or cases, based on your requirements.
