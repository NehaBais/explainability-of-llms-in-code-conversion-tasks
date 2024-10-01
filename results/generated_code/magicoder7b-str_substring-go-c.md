 Below is the equivalent C code for the given Golang code with UTF-8 support. Note that in C you need to handle memory allocations manually which makes it slightly more complex than Go. 

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printSubString(char *str, int n, int m) {
    printf("Index: %s\n", "01234567"); // reference index 
    printf("String: %s\n", str);
    
    // starting from n characters in and of m length
    if (m < strlen(str)-n) {
        char *substring = malloc((strlen(str)-n-1)*sizeof(char));
        memcpy(substring, &str[n], (strlen(str)-n-1)*sizeof(char)); // starting from n characters in
        
        printf("Start %d, length %d:    %s\n", n, m, substring);
        
        free(substring);
    } else {
        printf("Invalid parameters for this operation.\n"); 
    }
    
    // starting from n characters in, up to the end of the string
    if (n < strlen(str)) {
        char *substring = malloc((strlen(str)-n)*sizeof(char));
        memcpy(substring, &str[n], (strlen(str)-n)*sizeof(char)); // starting from n characters in 
        
        printf("Start %d, to end:      %s\n", n, substring);
        
        free(substring);
    } else {
        printf("Invalid parameters for this operation.\n"); 
    }
    
    // whole string minus last character
    if (strlen(str) > 1) {
        char *substring = malloc((strlen(str)-1)*sizeof(char));
        memcpy(substring, str, (strlen(str)-1)*sizeof(char)); // all but the last character
        
        printf("All but last:         %s\n", substring);
        
        free(substring);
    } else {
        printf("Invalid parameters for this operation.\n"); 
    }
    
    char *substr = "DE";
    int dx = strstr(str, substr) - str; // starting from a known character within the string
    if (dx >= 0 && dx+m <= strlen(str)) {
        substring = malloc((strlen(str)-dx-1)*sizeof(char));
        memcpy(substring, &str[dx], (strlen(str)-dx-1)*sizeof(char)); // starting from 'D'
        
        printf("Start '%s', length %d:  %s\n", substr, m, substring);
        
        free(substring);
    } else {
        printf("Invalid parameters for this operation.\n"); 
    }
    
    // Starting from a known substring within the string and of m length.
    int sx = strstr(str, "DE") - str;
    if (sx >= 0 && sx+m <= strlen(str)) {
        char *substring = malloc((strlen(str)-sx-1)*sizeof(char));
        memcpy(substring, &str[sx], (strlen(str)-sx-1)*sizeof(char)); // starting from "DE"
        
        printf("Start \"%s\", length %d:  %s\n", substr, m, substring);
        
        free(substring);
    } else {
        printf("Invalid parameters for this operation.\n"); 
    }
}

int main() {
    char *str = "ABCDEFGH";
    
    printSubString(str, 2, 3);
    
    return 0;
}
```
Please note: The above code allocates memory dynamically for the substrings. When you are finished with a substring, it should be freed to prevent memory leaks. You can use `free()` function in C to do this. In addition, C string functions like `strncpy()`, `memcpy()`, and `malloc()` may behave differently than in Go when handling multibyte characters or zero-terminated strings.
