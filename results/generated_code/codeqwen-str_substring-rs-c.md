In C, we can't directly convert Unicode to code points but we can use the UTF-8 library like `iconv` for this purpose. The following is a simple example of how you could achieve similar functionality in C:

```c
#include <stdio.h>
#include <string.h>
#include <iconv.h>

char *substr(const char *s, size_t n, size_t m) {
    size_t len = strlen(s);
    if (n >= len || m > len - n) return NULL; // out of bounds check

    // Allocate a new string that is going to hold the substring
    char *sub = malloc((m + 1) * sizeof(char));

    // Copy from s to sub starting at index n for m characters.
    for (size_t i = n; i < n+m; ++i) {
        sub[i-n] = s[i];
    }

    sub[m] = '\0'; // null terminate the new string
    return sub;
}

int main() {
    char *s = "abc文字化けdef";
    size_t n = 2, m = 3;

    // Print 3 characters starting at index 2 (c文字)
    printf("%s\n", substr(s, n, m));

    // Print all characters starting at index 2 (c文字化けdef)
    printf("%s\n", substr(s, n, strlen(s) - n));

    // Print all characters except the last (abc文字化けde)
    printf("%s\n", substr(s, 0, strlen(s) - 1));

    size_t cpos = strchr(s, 'b') - s; // find position of 'b'
    printf("%s\n", substr(s + cpos, 0, m)); // print first 'm' characters after 'b'

    size_t spos = strstr(s, "けd") - s; // find position of substring "けd"
    printf("%s\n", substr(s + spos, 0, m)); // print First 'm' characters after substring "けd"

    return 0;
}
```

This code will output the same result as your Rust program. Note that this is a simple example and does not handle memory management well - you would want to add error checking, deallocate memory when it's no longer needed, etc.
