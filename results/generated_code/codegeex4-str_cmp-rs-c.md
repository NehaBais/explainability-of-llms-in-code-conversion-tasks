C doesn't have built-in string comparison functions. However, they can be implemented manually or by using standard library functions.

Here's how we can rewrite the given Rust program in C:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[] = "abc";
    char b[] = "Bac";

    if(strcmp(a, b) == 0){
        printf("The strings are equal\n");
    }
    if(strcmp(a, b) != 0){
        printf("The strings are not equal\n");
    }
    if(strcmp(a, b) > 0){
        printf("The first string is lexically after the second\n");
    }
    if(strcmp(a, b) < 0){
        printf("The first string is lexically before the second\n");
    }

    // Case-insensitive comparison
    char a_lower[] = "abc", b_lower[] = "bac";
    int i;

    for(i=0;a[i]!='\0'&&b[i]!='\0';i++){
        if(tolower(a[i])!=tolower(b[i])){
            break;
        }
    }
    
    if(a[i]=='\0' && b[i]=='\0'){
        printf("Both strings are equal when ignoring case\n");
    } else {
        printf("The strings are not equal even when ignoring case\n");
    }

    return 0;
}
```
This code first checks for equality, inequality, greater than and less than with the `strcmp` function. The `strcmp` function works by comparing the ASCII value of each character in the string until it hits a difference.

The case-insensitive comparison converts all characters to lower case using the `tolower` function and then compares them. If there is a mismatch, it breaks out of the loop and checks if both strings have reached their end. If so, they are equal regardless of case. If not, they're not equal even when ignoring case.

Please note that this only works for ASCII characters. For Unicode strings with case-insensitivity comparisons or numeric string comparisons, C standard library does not provide built-in support. You would need to write your own functions or use third-party libraries.
