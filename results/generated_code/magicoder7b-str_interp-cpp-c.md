 C does not have built-in string manipulation functions as detailed in your code, but you can achieve similar string interpolation using a simple program. Please note that this version is not as efficient or robust as the C++ version and should be used only if efficiency or performance isn't an important consideration:

```c
#include <stdio.h>
#define MAX 1024

void replace(char *str, char *old_word, char *new_word) {
    char buffer[MAX];
    int i = 0, j = 0;
    while (str[i]) {
        if (strncmp(&str[i], old_word, strlen(old_word)) == 0) {
            for (j = 0; new_word[j]; j++)
                buffer[i++] = new_word[j];
            i++;
        } else {
            buffer[i++] = str[i-1];
        }
    }
    buffer[i] = '\0';
    printf("String after replacement: %s\n", buffer);
}

int main() {
    char original[] = "Mary had a X lamb.";
    char toBeReplaced[] = "X";
    char replacement[] = "little";
    
    replace(original, toBeReplaced, replacement);

    return 0;
}
```
This version replaces the first occurrence of `toBeReplaced` in `original` with `replacement`. Note that this is case-sensitive and only checks for an exact match. If you need it to be case insensitive or to replace all occurrences, you would need a more complex solution or use a library like GNU's Glib which provides functions to do these kinds of string manipulations.
The code basically creates a new string `buffer` and appends characters from both input strings one by one checking for matches during the process. It uses `strncmp()` to compare two strings, and `strlen()` to get the length of a string. The resulting string is then printed out.
