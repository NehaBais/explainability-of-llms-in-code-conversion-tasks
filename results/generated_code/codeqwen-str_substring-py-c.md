In C, there is no built-in function to directly obtain a substrings like Python's `s[:n]`, `s[n:]`, and so on. However, you can create your own function that does this. Here's how to implement it:

```c
#include <stdio.h>
#include <string.h>

// Function to get a substring
char* getSubString(const char* str, int startIndex, int length) {
    if (startIndex + length > strlen(str)) {
        length = strlen(str) - startIndex;
    }
    char* subStr = (char*)malloc((length+1)*sizeof(char));
    memcpy(subStr, &str[startIndex], length);
    subStr[length] = '\0';
    return subStr;
}

int main() {
    char s[] = "abcdefgh";
    int n = 2, m = 3;
    printf("%s\n", getSubString(s, n-1, m));  // Starting from n=2 characters in and m=3 in length

    printf("%s\n", getSubString(s, n-1, strlen(s)-n+1)); // Starting from n characters in, up to the end of the string

    printf("%s\n", getSubString(s, 0, strlen(s)-1)); // Whole string minus last character

    char charToFind[] = "d";
    int indx = -1;
    while ((indx=strstr(s, charToFind)-s) != -1) {
        printf("%s\n", getSubString(s, indx, m));  // Starting from a known character char="d" within the string and of m length
        break;
    }

    char charsToFind[] = "cd";
    while ((indx=strstr(s, charsToFind)-s) != -1) {
        printf("%s\n", getSubString(s, indx, m)); // Starting from a known substring chars="cd" within the string and of m length
        break;
    }

    return 0;
}
```
This C program uses a function `getSubString` to get a substring. It first checks if the sum of `startIndex` and `length` is greater than the length of the string, if it's true, then it reduces `length`. After that it creates a new string and copies the necessary characters from the original string. 

The `main` function uses this function to get substrings as per requirements.

Please note: This code assumes that you have dynamic memory allocation available in your C environment (like malloc). If it's not possible, then you can use a fixed size buffer to store the substring and handle cases where the length of the string is greater than the size of the buffer. 

Also, this solution does not support Unicode characters, as the problem statement says only logical characters should be referenced, which in C means ASCII character codes. If you need to work with full Unicode strings, then you would need a different approach that handles Unicode code points correctly.
