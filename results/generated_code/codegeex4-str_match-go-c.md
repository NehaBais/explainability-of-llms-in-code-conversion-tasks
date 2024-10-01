Below is the C equivalent of your Golang code:

```C
#include <stdio.h>
#include <string.h>

void match(char *first, char *second) {
    if (strstr(first, second) == first) {
        printf("1. %s starts with %s: True\n", first, second);
    } else {
        printf("1. %s starts with %s: False\n", first, second);
    }
    
    char *pos = strstr(first, second);
    if (pos != NULL) {
        printf("2. %s contains %s: True, at location %ld\n", first, second, pos - first);
        
        while ((pos = strstr(pos + 1, second)) != NULL) {
            printf("2.2. at location %ld\n", pos - first);
        }
    } else {
        printf("2. %s contains %s: False\n", first, second);
    }

    char temp[strlen(first)];
    strcpy(temp, first);
    if (strstr(temp + strlen(temp) - strlen(second), second) == temp + strlen(temp) - strlen(second)) {
        printf("3. %s ends with %s: True\n", first, second);
    } else {
        printf("3. %s ends with %s: False\n", first, second);
    }
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```

This program defines a function `match` that takes two strings as parameters and checks if the first string starts with, contains, or ends with the second string. 

The `strstr` function is used to locate a substring within another string. If the starting location of the match equals the start of the string (`first`), then it means the first string starts with the second string.

For locating multiple occurrences, we increment the position by 1 and keep searching until no more matches are found.

To check if a string ends with another string, we create a copy of the string (since we do not want to modify the original) and calculate its length. We then use `strstr` function on the last part of the copied string where the second string could potentially end. If a match is found at this position, it means that the first string ends with the second string.

Please note in C, index calculation and string handling are more manual than in Golang, so we need to do these calculations ourselves. Also, the standard library `string.h` is used here for various string functions.
