In C language there is no built-in support for Unicode strings that are encoded in UTF-8 or UTF-16. To handle such cases would require additional libraries and more complex string processing functions, which would make the code significantly more complicated than when using a language with full Unicode support like Golang.

However, I will provide you a simplified version for C language where we assume that strings are in ASCII encoding, not Unicode:

```c
#include <stdio.h> 
#include <string.h>

int main() {
    char s[] = "ABCDEFGH";
    int n=2, m=3;
  
    printf("Index:     01234567\n");
    printf("String:    %s\n", s);
    // starting from n characters in and of m length 
    printf("Start %d, length %d:   %.*s\n", n, m, m, &s[n]);
    // starting from n characters in, up to the end of the string
    printf("Start %d, to end:     %s\n", n, &s[n]);
    // whole string minus last character 
    s[strlen(s)-1]='\0';
    printf("All but last:        %s\n", s);
    // starting from a known character within the string and of m length
    char *dx = strchr(s, 'D');
    printf("Start 'D', length %d:  %.*s\n", m, m, dx);
    // starting from a known substring within the string and of m length 
    char *sx = strstr(s, "DE");
    printf("Start \"DE\", length %d:%.*s\n", m,m, sx );
  
   return 0;
}
```
This code will work for ASCII strings only and it's important to note that C does not support Unicode inherently as Golang or other modern languages do. If you require Unicode string processing capabilities in C, you would have to use a library specifically designed for this purpose, such as the ones available in Java or Python.
