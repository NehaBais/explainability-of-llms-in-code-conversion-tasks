Converting this Python code to C requires handling Unicode characters using a library such as `libicu` (International Components for Unicode). The following C code demonstrates how to achieve the same functionality:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unicode/ucnv.h>
#include <unicode/utypes.h>

void printSubstring(const char* str, int start, int length) {
    UErrorCode status = U_ZERO_ERROR;
    UChar* ustr = NULL;
    int32_t len = u_strlen((UChar*)str);
    
    // Convert the string to UTF-16
    ustr = (UChar*)malloc(len * sizeof(UChar));
    if (!ustr) {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }
    
    u_strFromUTF8(ustr, len + 1, &len, str, -1, &status);
    if (U_FAILURE(status)) {
        fprintf(stderr, "Conversion to UTF-16 failed: %s\n", u_errorName(status));
        free(ustr);
        return;
    }
    
    // Create a UnicodeString object
    UChar16* ustr16 = (UChar16*)ustr;
    int32_t startIdx = start - 1; // Adjust for zero-based index
    int32_t endIdx = start + length - 1;
    
    // Ensure indices are within bounds
    if (startIdx < 0 || startIdx >= len || endIdx >= len) {
        fprintf(stderr, "Index out of bounds\n");
        free(ustr);
        return;
    }
    
    UChar16* subStr = u_strDupRange(NULL, 0, &status, ustr16, startIdx, endIdx + 1);
    if (U_FAILURE(status)) {
        fprintf(stderr, "Failed to get substring: %s\n", u_errorName(status));
        free(ustr);
        return;
    }
    
    // Print the substring
    u_fprintf(stdout, u"%s\n", subStr);
    
    // Clean up
    free(ustr);
    u_free(subStr);
}

int main() {
    const char* s = "abcdefgh";
    int n, m;
    char char1[2] = { 'd', '\0' };
    char chars[] = "cd";
    
    // starting from n=2 characters in and m=3 in length
    n = 2;
    m = 3;
    printSubstring(s, n, m);
    
    // starting from n characters in, up to the end of the string
    n = 2;
    printSubstring(s, n, -1);
    
    // whole string minus last character
    printSubstring(s, 1, -1);
    
    // starting from a known character char="d" within the string and of m length
    n = 4; // Index of 'd'
    m = 3;
    printSubstring(s, n, m);
    
    // starting from a known substring chars="cd" within the string and of m length
    int startIndex = strcspn(s, chars) + strlen(chars);
    n = startIndex + 1; // Index after "cd"
    m = 3;
    printSubstring(s, n, m);
    
    return 0;
}
```

### Explanation:
1. **UTF-8 to UTF-16 Conversion**: The code uses the `libicu` library to convert a UTF-8 string to UTF-16.
2. **Indexing and Substring Extraction**: The indices are adjusted for zero-based indexing in C, and the `u_strDupRange` function is used to extract substrings.
3. **Error Handling**: The code checks for errors during conversion and substring extraction.

### Compilation:
To compile this code, you need to link against the `libicuuc` library:

gcc -o string_substring string_substring.c -licuuc -licui18n

This will produce an executable that can handle Unicode characters correctly.
