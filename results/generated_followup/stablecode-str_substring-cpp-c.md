The error occurs on lines 12, 14, 15, and 16.

Fix:
Remove the extraneous ')' before ';' in line 14. Remove the subscripted value is not an array, pointer, or vector in lines 12, 15, and 16.

Corrected code:
```c
#include 
#include 

int main() {
    char s[] = "01234567890";

    int const n = 3;
    int const m = 4;
    char const c = '2';
    char const sub[] = "456";

    printf("%.*s\n", m, strstr(s, &c[0])) + n);
    printf("%.*s\n", m, s + (strlen(s) - 1)));
    printf("%.*s\n", m, strstr(s, sub)) + n;

    return 0;
}
```
