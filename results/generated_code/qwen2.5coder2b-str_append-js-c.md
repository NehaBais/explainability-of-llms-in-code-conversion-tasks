In C, you can achieve this by using string concatenation with the '+' operator. Here's how you can modify your code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello";
    strcpy(s1, "World!");
    printf("%s\n", s1);
    return 0;
}
```

Note: `strcpy` is used here because C does not have built-in string concatenation. This function copies the string pointed to by `s1` and appends it with the string pointed to by `s2`. If you want to concatenate two strings in C, you would need to manually write a function for that.
