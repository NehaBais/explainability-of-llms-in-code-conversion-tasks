This is the C version of your code:
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char original[] = "Mary had a X lamb.";
    char toBeReplaced[] = "X";
    char replacement[] = "little";

    char *newString;
    int len, pos;

    len = strlen(original);
    newString = (char*) malloc((len + 1) * sizeof(char));

    if ((pos = strstr(original, toBeReplaced)) != NULL) {
        strncpy(newString, original, pos - original); 
        newString[pos - original] = '\0';
        strcat(newString, replacement);
        strcat(newString, &original[pos + strlen(toBeReplaced)]);
    } else {
        strcpy(newString, original);
    }

    printf("String after replacement: %s \n", newString); 

    free(newString); 
    return 0;
}
```
The main difference between C++ and C is that in C++, you use std::string to create and manipulate strings. In C, you must include string.h and allocate memory for your strings with malloc or calloc. You also need to manually manage the memory you allocate with free. Additionally, unlike C++, C does not have operator overloading for std::string objects, so if you want to use strstr, you'll need to pass a pointer to the null-terminated string (not a std::string object).
The process of replacing X in your original string is now more complex in C because you cannot directly use string replacement methods in C. Instead, we use strcpy and strcat functions to copy and concatenate parts of the original string into our newString variable.
In this version of the code, the variable len stores the length of the original string, pos stores the position of the character sequence to be replaced (in this case 'X'), and pos_len is the length of the character sequence being replaced. We also use malloc to allocate memory for our newString variable before copying any part of the original string into it. Finally, we use free to deallocate the memory when the program is done using newString.
