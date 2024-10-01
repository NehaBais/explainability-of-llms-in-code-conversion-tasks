Below is the converted code from Golang to C:

```c
#include <stdio.h>
#include <string.h>

void match(char* first, char* second) {
    printf("1. \"%s\" starts with \"%s\": %d\n", 
        first, second, strncmp(first, second, strlen(second))) == 0);

    int found = -1;
    for (int i = 0; i < strlen(first) && found == -1; ++i) {
        if (strncmp(&first[i], second, strlen(second))) == 0) {
            found = i;
        }
    }

    printf("2. \"%s\" contains \"%s\": %d\n", 
        first, second, found));

    printf("3. \"%s\" ends with \"%s\": %d\n", 
        first, second, strncmp(&first[strlen(second) - 1], second, strlen(second))) == 0);
}

int main() {
    char first[100];
    char second[100];

    printf("Enter the first string: ");
    scanf("%s", first));

    printf("Enter the second string: ");
    scanf("%s", second));

    match(first, second);

    return 0;
}
```

This code takes two strings as input and demonstrates three types of string matching. The results are printed to the console.
