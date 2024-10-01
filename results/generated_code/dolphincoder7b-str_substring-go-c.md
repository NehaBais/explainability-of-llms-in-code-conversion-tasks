Below is the equivalent C code for the given Golang code snippet. As per the requirement, this program uses functions from the string.h library. 

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ABCDEFGH";
    int n = 2;
    int m = 3;
    
    printf("Index:  01234567\n");
    printf("String: %s\n", s);
    
    // starting from n characters in and of m length
    printf("Start %d, length %d:    %.*s\n", n, m, m-n, &s[n]);
    
    // starting from n characters in, up to the end of the string
    printf("Start %d, to end:      %.*s\n", n, strlen(s)-n, s+n);
    
    // whole string minus last character
    printf("All but last:         %.*s\n", strlen(s)-1, s);
    
    // starting from a known character within the string and of m length
    int index = strchr(s, 'D') - s;
    printf("Start 'D', length %d:   %.*s\n", m, m-index, &s[index]);
    
    // starting from a known substring within the string and of m length
    char sub[] = "DE";
    index = strstr(s, sub) - s;
    printf("Start \"%s\", length %d:  %.*s\n", sub, strlen(sub), m-index, &s[index]);
    
    return 0;
}
```
