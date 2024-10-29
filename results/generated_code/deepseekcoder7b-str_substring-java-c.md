Below is the C code equivalent to your Java function. This requires using pointers and string functions in C such as `strlen()`, `strchr()`, etc., along with a bit of manual index calculation for handling Unicode characters beyond Basic Multilingual Plane (BMP). In addition, it assumes that the input strings are UTF-8 encoded.

```c
#include <stdio.h>
#include <string.h>
#include <assert.h>

char *substr_n_m(const char *str, int n, int m) {
    while (n-- > 0 && *str!='\0') str++; // Skip first n characters
    const char *start = str;
    while (m-- > 0 && *str!='\0') {      // Advance by m characters 
        if ((*str & 0xC0) != 0x80) start = str; // If not a continuation byte, record new starting point.
        str++;
    }
    return strchr(start, '\0') == NULL ? (char*)start : (char*)str;
}

char *substr_n(const char *str, int n) {
    while (n-- > 0 && *str!='\0') str++; // Skip first n characters 
    return (char*)str;
}

char *substr(const char *str) {
    const char *last = str + strlen(str) - 1;
    return (char*) last >= str ? last : str;   // Check if last character is not beyond the string
}

// Known character case
char *substr_c_m(const char *haystack, int m, char needle) {
    while (*haystack && --m >= 0) haystack += (*haystack == needle);
    return (char*)haystack;
}

// Known substring case
char *substr_s_m(const char *haystack, int m, const char *needle) {
    const char *p = strstr(haystack, needle);  // Find the first occurrence of needle in haystack.
    if (NULL == p || m <= 0) return (char*)haystack;   // If not found or no length requested then return original string.
    
    while ((m -= strlen(needle)) > 0 && *p) { 
        p += (*p == *needle++);                  // Move to the end of needle in haystack.
   <｜begin▁of▁sentence｜>	r<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>﻿</span> This code is licensed under MIT license.

