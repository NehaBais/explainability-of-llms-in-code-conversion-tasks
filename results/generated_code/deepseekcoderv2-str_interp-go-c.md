## Solution 1:

```c
#include <stdio.h>
#include <string.h>

char *my_sprintf(char *s, const char *format, ...) {
    // TODO: Implement sprintf function
}

int main() {
    char format[] = "Mary had a %s lamb";
    char text[] = "little";
    my_sprintf(format, "%s", text);
    printf("%s\n", format);
    return 0;
}
```
## Solution 2:


#include <stdio.h>
#include <string.h>

int main() {
    char *str = "Mary had a %s lamb";
    char text[] = "little";
    int len_format = strlen(str);
    int len_text = sizeof(text) / sizeof(char);

    char *out = (char*)malloc((len_format + 1) * sizeof(char));
    strcpy(out, str);
    for (int i = 0; i < len_format; i++) {
        if (str[i] == '%' && i+1 < len_format && str[i+1] == 's') {
            out[i] = text[0];
            break;
        } else {
            out[i] = str[i];
        }
    }
    printf("%s\n", out);
    free(out);
    return 0;
}
