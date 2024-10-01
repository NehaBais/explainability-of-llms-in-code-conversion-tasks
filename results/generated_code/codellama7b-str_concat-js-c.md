 In C, you can create a string variable by using an array of characters and initializing it to the desired text value. You can concatenate strings in C by creating a new array that contains the elements of both strings. Here's an example:
```
#include <stdio.h>

int main() {
    char s[] = "hello";
    printf("%s\n", s); // prints "hello"
    
    char *concat_str = malloc(strlen(s) + strlen(" there!") + 1);
    strcpy(concat_str, s);
    strcat(concat_str, " there!");
    printf("%s\n", concat_str); // prints "hello there!"
    
    return 0;
}
```
In the above code, we first create a string variable `s` and assign it the value `"hello"`. We then print its content using `printf()`. Next, we allocate memory for a new string variable `concat_str` that can hold the concatenated string "hello there!", using `malloc()` and `strlen()`. We then use `strcpy()` to copy the contents of `s` into `concat_str`, followed by `strcat()` to append the string literal `" there!"`. Finally, we print the content of `concat_str` using `printf()`.
Note that this code assumes that you have included the necessary header files for `stdio.h` and `string.h`.
