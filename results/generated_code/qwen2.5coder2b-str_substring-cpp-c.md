```c
#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "0123456789";
    int n = 3;
    int m = 4;
    char c = '2';
    char sub[6] = "456";

    printf("%s\n", &s[n]);
    printf("%s\n", &s[n]);
    printf("%s\n", s);
    printf("%s\n", &s[s.find(c)]);
    printf("%s\n", &s[s.find(sub)]);

    return 0;
}
```
