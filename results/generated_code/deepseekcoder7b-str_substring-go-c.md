Below is the C equivalent of your Go code:

- Note: In C, strings are represented as char arrays. Therefore, it's a bit different than in Golang where you can index into substrings and so on. 

```C
#include <stdio.<｜begin▁of▁sentence｜>
int main() {
    char s[] = "ABCDEFGH";
    int n = 2;
    int m = 3;
    
    // for reference
    printf("Index:  01234567\n");
    printf("String: %s\n", s);
    
    // starting from n characters in and of m length
    char *substr = &s[n];
    printf("Start %d, length %d:    ", n, m);
    for (int i = 0; i < m; ++i) {
        putchar(substr[i]);
    }
    putchar('\n');
    
    // starting from n characters in, up to the end of the string
    printf("Start %d, to end:       ", n);
    for (int i = n; s[i] != '\0'; ++i) {
        putchar(s[i]);
    }
    putchar('\n');
    
    // whole string minus last character
    printf("All but last:          ");
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i + 1] != '\0'){
            putchar(s[i]); 
        }
    }
    putchar('\n');
    
    // starting from a known character within the string and of m length
    char *dx = strchr(s, 'D');
    printf("Start 'D', length %d:   ", m);
    for (int i = 0; i < m && dx[i] != '\0'; ++i) {
        putchar(dx[i]);
    }
    putchar('\n');
    
    // starting from a known substring within the string and of m length
    char *sx = strstr(s, "DE");
    printf("Start \"DE\", length %d: ", m);
    for (int i = 0; i < m && sx[i] != '\0'; ++i) {
        putchar(sx[i]);
    }
    putchar('\n');
    
    return 0;
}
```
In C, to support UTF-8 or UTF-16 you need to use a library that can handle these encodings. For example, GLib provides GUnicode (Glib Unicode), which allows conversion between different unicode encodings and also works with utf-8 strings. However, this is quite complex for such simple operations as substring extraction and it might be overkill in many cases.

