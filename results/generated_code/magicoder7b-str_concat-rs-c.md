 In C, the code would look like this:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char *s = "hello";
    printf("%s\n", s);
    
    int len1 = strlen(s);
    char* s1 = (char*)malloc((len1 + 6) * sizeof(char)); // "+6" for the space and null character.
    strcpy(s1, s);
    strcat(s1, " world");
    printf("%s\n", s1);
    
    free(s1);
}
```

In this code:
- `char *s = "hello";` creates a string literal `"hello"` and assigns it to the pointer variable `s`.
- `printf("%s\n", s);` prints out the contents of `s`, i.e., `"hello"`.
- The memory for `s1` is dynamically allocated with `malloc()`.
- `strcpy(s1, s);` copies the content from `s` to `s1`. 
- `strcat(s1, " world");` appends the string `" world"` to `s1`.
- `printf("%s\n", s1);` prints out the concatenated string.
- `free(s1);` frees up the dynamically allocated memory for `s1`.
