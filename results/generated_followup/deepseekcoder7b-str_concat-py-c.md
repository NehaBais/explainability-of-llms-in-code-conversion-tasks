The error message indicates that there are some unrecognized characters being used. It seems like they're not permitted in identifiers or may be omitted, which is likely causing the issue. 

Here's the corrected C code:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "hello";
    printf("%s world\n", s1); // Concatenates and prints the string
  
    char s2[100];  // Declare a character array to hold concatenated result
    strcpy(s2, s1); // Copy original string into new string
    strcat(s2, " world"); // Concatenate another string literal onto the end of it
    printf("%s\n", s2);  // Prints the content of variable s2
  
    char* words[3] = {"world", "mom"}; // Declare an array to hold the words we want to join
    strcpy(s1, words[0]);
    for (int i = 1; i < 2; ++i) {  // Loop through the words we want to join
        strcat(s1, ",");
        strcat(s1, words[i]);  // Concatenate each word onto the end of our string.
    }
  
    printf("%s\n", s1);  // Prints the content of variable s2
  
    return 0;
}
```

