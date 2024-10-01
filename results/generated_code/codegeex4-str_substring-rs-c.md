In C, there's no built-in support for Unicode, including code point and substring search. We'll need to use a library like ICU (International Components for Unicode) to handle these tasks.

Here is how you can implement this in C using the ICU library:

```c
#include <stdio.h>
#include <stdlib.h>
#include "unicode/ustdio.h"
#include "unicode/ustring.h"
#include "unicode/ucnv.h"

void display_substring(const char *str, int n, int m) {
    UChar ustr[1024];
    UErrorCode status = U_ZERO_ERROR;
    const UChar *src = (const UChar *)str;
    int32_t len = u_strlen(src);

    // Print 3 characters starting at index 2
    if(n < len && n + m <= len) {
        src += n;
        u_fprintf(stdout, "%.*S\n", m, src);
    }

    // Print all characters starting at index 2
    if (n < len) {
        src += n;
        u_fprintf(stdout, "%.*S\n", len - n, src);
    }

    // Print all characters except the last
    if (len > 1) {
        u_fprintf(stdout, "%.*S\n", len - 1, src);
    }

    // Print 3 characters starting with 'b'
    src = u_strstr(src, (const UChar *)"b", &status);
    if(src != NULL && n + m <= len) {
        u_fprintf(stdout, "%.*S\n", m, src);
    }

    // Print 3 characters starting with "けd"
    src = u_strstr(src, (const UChar *)"けd", &status);
    if(src != NULL && n + m <= len) {
        u_fprintf(stdout, "%.*S\n", m, src);
    }
}

int main() {
    const char *s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    display_substring(s, n, m);

    return 0;
}
```

You will need to link against the ICU library when compiling this program:

gcc -o myprogram myprogram.c `pkg-config --cflags --libs icu-uc`

Please note that this is a simplified example and does not handle all edge cases. For production code, you should ensure proper error checking and handle various Unicode edge cases as described in the ICU documentation.
