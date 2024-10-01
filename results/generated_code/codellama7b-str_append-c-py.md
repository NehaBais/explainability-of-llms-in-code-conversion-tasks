```
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Good Morning";
    const char* cstr = " to all";
    const char* cstr2 = " !!!";
    int x;

    if (sizeof(str) > strlen(str) + strlen(cstr) + strlen(cstr2)) {
        // 1st method: using strcat() function
        strcat(str, cstr);
        strcat(str, cstr2);

        printf("%s\n", str);
    }
    return 0;
}
```
In this code, we define a `char` array called `str` with a size of 24 characters. We initialize it with the string "Good Morning". We then define two string literals `cstr` and `cstr2`, which hold the strings " to all" and " !!!", respectively.

We check if there is enough space in the `str` array to store the concatenated strings by comparing its size with the length of the original string plus the lengths of the two additional strings. If there is not enough space, we print an error message and exit the program.

If there is enough space, we use the `strcat()` function to append the two strings to the end of the original string in the first method. We then use the `sprintf()` function to add the third string to the end of the concatenated string in the second method. Finally, we print the contents of the `str` array using the `%s\n` format specifier.

Note that we have used the `const` keyword to declare the string literals `cstr` and `cstr2`, as they are not supposed to be modified. This is a good practice to follow, as it helps to prevent accidental modifications of constant data.
