The error message indicates that the compiler cannot find the `<stdio.h>` file, which is required to use functions like `printf` and `putchar`. 

To fix this, include the correct path to the header files when compiling the C program. If the necessary libraries are in your current directory, you can compile it with: gcc -o output_file input_file.c -I .

Replace `output_file` and `input_file.c` with names of your choice for the output file and source code respectively. 

The corrected C code is as follows:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ABCDEFGH";
    int n = 2;
    int m = 3;
    
    // for reference
    printf("Index:  01234567\n");
    printf("String: %s\n", s);
    
    // starting from n characters in and of m length
    char *substr = &s[n];
    printf("Start %d, length %d: ", n, m);
    for(int i = 0; i < m; ++i) {
        putchar(substr[i]);
    }
    putchar('\n');
    
    // starting from n characters in, up to the end of the string
    printf("Start %d, to end: ", n);
    for(int i = n; s[i] != '\0'; ++i) {
        putchar(s[i]);
    }
    putchar('\n');
    
    // whole string minus last character
    printf("All but last: ");
    for(int i = 0; s[i] != '\0'; ++i) {
        if (s[i + 1] != '\0') {
            putchar(s[i]);
        }
    }
    putchar('\n');
    
    // starting from a known character within the string and of m length
    char *dx = strchr(s, 'D');
    printf("Start 'D', length %d: ", m);
    for(int i = 0; i < m && dx[i] != '\0'; ++i) {
        putchar(dx[i]);
    }
    putchar('\n');
    
    // starting from a known substring within the string and of m length
    char *sx = strstr(s, "DE");
    printf("Start \"DE\", length %d: ", m);
    for(int i = 0; i < m && sx[i] != '\0'; ++i) {
        putchar(sx[i]);
    }
    putchar('\n');
    
    return 0;
}
```

This code should compile and run without any errors. The function `strchr()` is used to find the first occurrence of a character in a string, while `strstr()` locates the first occurrence of a substring. Both functions are declared in the header file `<string.h>`. 

The `putchar(dx[i]);` and `putchar(sx[i]);` lines print each character one by one until the end of string or m characters have been printed. The condition `s[i + 1] != '\0'` ensures that we don't try to access memory beyond the bounds of our string with the last character, as `putchar(s[i]);` would do if i was equal to the length of the string and s[i+1] is out-of-bounds.

