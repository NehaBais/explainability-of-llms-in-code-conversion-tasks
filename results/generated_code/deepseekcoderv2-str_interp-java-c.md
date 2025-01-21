 Certainly! In C, you can achieve similar functionality using formatted output functions. Here's how you can convert the given Java code to C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char adjective[] = "little";
    char lyric[100]; // Assuming the maximum length of the resulting string will not exceed 100 characters
    
    // Use sprintf to format the string with the adjective
    sprintf(lyric, "Mary had a %s lamb", adjective);
    
    printf("%s\n", lyric);
    
    return 0;
}
```

In this C code:
- We define an array `adjective` holding the value `"little"`.
- We use the `sprintf` function to format a string `lyric` by inserting the content of `adjective` into the placeholder `%s`, which is replaced with the actual string "little".
- Finally, we print the resulting string using `printf`.
