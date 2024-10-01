 In C, the equivalent code would be:

```C
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printSubstring(char* s, int n, int m) {
    printf("%.*s", m, &s[n]);
}

int main() {
    char s[] = "abc文字化けdef";
    int n = 2;
    int m = 3;
    
    // Print 3 characters starting at index 2 (c文字)
    printSubstring(s, n, m);
    printf("\n");
    
    // Print all characters starting at index 2 (c文字化けdef)
    printSubstring(s, n, strlen(s));
    printf("\n");
    
    // Print all characters except the last (abc文字化けde)
    int len = strlen(s);
    printSubstring(s, 0, len-1);
    printf("\n");
    
    // Print 3 characters starting with 'b' (bc文)
    if(strchr(s, 'b')) {
        char* pos = strchr(s, 'b');
        printSubstring(pos+1, 0, m);
        printf("\n");
    }
    
    // Print 3 characters starting with "けd" (けde)
    if(strstr(s, "けd")) {
        char* pos = strstr(s, "けd");
        printSubstring(pos+2, 0, m);
        printf("\n");
    }
    
    return 0;
}
```

Please note that the C standard library does not provide a direct equivalent to Rust's `.chars()` iterator. So, we just use `printf("%.*s", ...)` as a replacement. For the last two lines of code, it will check if "b" or "けd" exists in the string and print 3 characters starting from that character.
