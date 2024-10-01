Certainly! Here are the C equivalents of the given Java functions:

1. `public static String Substring(String str, int n, int m)`

In C, we can use the `strncpy` function to copy a substring from a string to another string. The prototype of this function is as follows:
```c
char *strncpy ( char * destination, const char * source, size_t num );
```
Here, we need to specify the starting index of the substring and its length. We can use the `strlen` function to get the length of the string. Here's an example code:
```c
#include <string.h>

char *Substring(const char *str, int n, int m) {
    size_t len = strlen(str);
    if (n + m > len || n < 0 || m <= 0) return NULL;
    char *dest = malloc(m * sizeof(char));
    if (!dest) return NULL;
    memcpy(dest, str + n, m);
    dest[m] = '\0';
    return dest;
}
```
2. `public static String Substring(String str, int n)`

In C, we can use the `strncpy` function with a length of 1 to copy the character at a given index from a string to another string. Here's an example code:
```c
#include <string.h>

char *Substring(const char *str, int n) {
    if (n < 0 || n >= strlen(str)) return NULL;
    char c = str[n];
    char *dest = malloc(2 * sizeof(char));
    if (!dest) return NULL;
    dest[0] = c;
    dest[1] = '\0';
    return dest;
}
```
3. `public static String Substring(String str)`

In C, we can use the `strncpy` function with a length of 1 to copy the last character from a string to another string. Here's an example code:
```c
#include <string.h>

char *Substring(const char *str) {
    size_t len = strlen(str);
    if (len == 0) return NULL;
    char c = str[len - 1];
    char *dest = malloc(2 * sizeof(char));
    if (!dest) return NULL;
    dest[0] = c;
    dest[1] = '\0';
    return dest;
}
```
4. `public static String Substring(String str, char c, int m)`

In C, we can use the `strstr` function to find a substring in a string and then copy it to another string using the `strncpy` function. Here's an example code:
```c
#include <string.h>

char *Substring(const char *str, char c, int m) {
    const char *ptr = strstr(str, &c);
    if (ptr == NULL || ptr - str + 1 > m) return NULL;
    size_t len = strlen(ptr + 1);
    if (len > m) len = m;
    char *dest = malloc((len + 1) * sizeof(char));
    if (!dest) return NULL;
    memcpy(dest, ptr + 1, len);
    dest[len] = '\0';
    return dest;
}
```
5. `public static String Substring(String str, String sub, int m)`

In C, we can use the `strstr` function to find a substring in a string and then copy it to another string using the `strncpy` function. Here's an example code:
```c
#include <string.h>

char *Substring(const char *str, const char *sub, int m) {
    const char *ptr = strstr(str, sub);
    if (ptr == NULL || ptr - str + 1 > m) return NULL;
    size_t len = strlen(ptr + 1);
    if (len > m) len = m;
    char *dest = malloc((len + 1) * sizeof(char));
    if (!dest) return NULL;
    memcpy(dest, ptr + 1, len);
    dest[len] = '\0';
    return dest;
}
```
