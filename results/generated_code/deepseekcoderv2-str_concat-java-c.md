 Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello";
    printf("%s literal\n", s);
    
    // Create a new string to hold the concatenated result
    char s2[100]; // Assuming the maximum length of the resulting string will not exceed 99 characters + null terminator
    
    // Concatenate the original string with " literal"
    strcpy(s2, s);
    strcat(s2, " literal");
    
    printf("%s\n", s2);
    
    return 0;
}
```

Explanation:
1. In C, strings are represented as arrays of characters terminated by a null character (`'\0'`). Here, we use `char s[] = "hello";` to declare and initialize the string variable `s`.
2. We print the original string concatenated with " literal" using `printf("%s literal\n", s);`.
3. To concatenate strings in C, we can use the `strcpy` function from the `string.h` library to copy one string into another and then `strcat` to append the second string. We declare a new string `s2` with sufficient space for the concatenation result.
4. Finally, we print the concatenated result using `printf("%s\n", s2);`.
