```c
#include <stdio.h>

int main() {
    char* adjective = "little";
    char* lyric = malloc(40 * sizeof(char)); // assuming maximum length of string is 40 characters

    sprintf(lyric, "Mary had a %s lamb", adjective);

    printf("%s\n", lyric);
    
    free(lyric); // Free allocated memory
    return 0;
}
```
