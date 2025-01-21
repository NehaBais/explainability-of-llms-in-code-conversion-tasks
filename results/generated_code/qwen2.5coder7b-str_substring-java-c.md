Converting the Java code to C involves handling strings differently due to the way C handles Unicode and character encoding. We will use UTF-8 encoding and work with `libicu` (International Components for Unicode) library, which provides comprehensive support for Unicode.

Here's how you can implement these substring operations in C using the ICU library:

1. **Install ICU**: You need to have the ICU library installed on your system. On Ubuntu, you can install it using:
   ```sh
   sudo apt-get install libicu-dev
   ```

2. **Include necessary headers** and link against `libicuuc` and `libicui18n`.

3. **Implement the functions** using ICU.

Here's the complete C code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unicode/ustream.h>
#include <unicode/utf16.h>
#include <unicode/utext.h>

const char* Substring(const char* str, int n, int m) {
    UErrorCode error = U_ZERO_ERROR;
    UText utext = UTEXT_INITIALIZER;
    u_text_openUTF8(&utext, str, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening UTF-8 text\n");
        return NULL;
    }

    int32_t length = u_text_getLength(&utext);

    // Ensure n and m are within bounds
    if (n < 0 || n >= length) {
        fprintf(stderr, "Invalid starting index\n");
        utext_close(&utext);
        return NULL;
    }
    if (m <= 0 || n + m > length) {
        fprintf(stderr, "Invalid substring length\n");
        utext_close(&utext);
        return NULL;
    }

    UChar* buffer = malloc((m + 1) * sizeof(UChar));
    u_text_setNativeIndex(&utext, n);
    int32_t count = u_text_extract(&utext, buffer, m, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error extracting text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }
    buffer[count] = '\0';

    UText result = UTEXT_INITIALIZER;
    u_text_openUChars(&result, buffer, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening resulting UTF-8 text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }

    char* result_str = malloc(u_text_getLength(&result) + 1 * sizeof(char));
    u_text_toUTF8(result_str, -1, &result, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error converting to UTF-8\n");
        free(buffer);
        utext_close(&utext);
        utext_close(&result);
        return NULL;
    }

    utext_close(&utext);
    utext_close(&result);
    free(buffer);

    return result_str;
}

const char* SubstringFromIndex(const char* str, int n) {
    UErrorCode error = U_ZERO_ERROR;
    UText utext = UTEXT_INITIALIZER;
    u_text_openUTF8(&utext, str, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening UTF-8 text\n");
        return NULL;
    }

    int32_t length = u_text_getLength(&utext);

    // Ensure n is within bounds
    if (n < 0 || n >= length) {
        fprintf(stderr, "Invalid starting index\n");
        utext_close(&utext);
        return NULL;
    }

    UChar* buffer = malloc((length - n + 1) * sizeof(UChar));
    u_text_setNativeIndex(&utext, n);
    int32_t count = u_text_extract(&utext, buffer, length - n, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error extracting text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }
    buffer[count] = '\0';

    UText result = UTEXT_INITIALIZER;
    u_text_openUChars(&result, buffer, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening resulting UTF-8 text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }

    char* result_str = malloc(u_text_getLength(&result) + 1 * sizeof(char));
    u_text_toUTF8(result_str, -1, &result, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error converting to UTF-8\n");
        free(buffer);
        utext_close(&utext);
        utext_close(&result);
        return NULL;
    }

    utext_close(&utext);
    utext_close(&result);
    free(buffer);

    return result_str;
}

const char* SubstringUntilEnd(const char* str) {
    UErrorCode error = U_ZERO_ERROR;
    UText utext = UTEXT_INITIALIZER;
    u_text_openUTF8(&utext, str, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening UTF-8 text\n");
        return NULL;
    }

    int32_t length = u_text_getLength(&utext);

    UChar* buffer = malloc((length - 1 + 1) * sizeof(UChar));
    u_text_setNativeIndex(&utext, 0);
    int32_t count = u_text_extract(&utext, buffer, length - 1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error extracting text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }
    buffer[count] = '\0';

    UText result = UTEXT_INITIALIZER;
    u_text_openUChars(&result, buffer, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening resulting UTF-8 text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }

    char* result_str = malloc(u_text_getLength(&result) + 1 * sizeof(char));
    u_text_toUTF8(result_str, -1, &result, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error converting to UTF-8\n");
        free(buffer);
        utext_close(&utext);
        utext_close(&result);
        return NULL;
    }

    utext_close(&utext);
    utext_close(&result);
    free(buffer);

    return result_str;
}

const char* SubstringFromChar(const char* str, UChar c, int m) {
    UErrorCode error = U_ZERO_ERROR;
    UText utext = UTEXT_INITIALIZER;
    u_text_openUTF8(&utext, str, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening UTF-8 text\n");
        return NULL;
    }

    int32_t index = u_text_findChar32Backward(&utext, c, 0, &error);
    if (U_FAILURE(error) || index == -1) {
        fprintf(stderr, "Character not found or error finding it\n");
        utext_close(&utext);
        return NULL;
    }

    int32_t length = u_text_getLength(&utext);

    // Ensure n and m are within bounds
    if (n < 0 || n >= index) {
        fprintf(stderr, "Invalid starting index\n");
        utext_close(&utext);
        return NULL;
    }
    if (m <= 0 || n + m > length) {
        fprintf(stderr, "Invalid substring length\n");
        utext_close(&utext);
        return NULL;
    }

    UChar* buffer = malloc((m + 1) * sizeof(UChar));
    u_text_setNativeIndex(&utext, index + n);
    int32_t count = u_text_extract(&utext, buffer, m, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error extracting text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }
    buffer[count] = '\0';

    UText result = UTEXT_INITIALIZER;
    u_text_openUChars(&result, buffer, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening resulting UTF-8 text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }

    char* result_str = malloc(u_text_getLength(&result) + 1 * sizeof(char));
    u_text_toUTF8(result_str, -1, &result, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error converting to UTF-8\n");
        free(buffer);
        utext_close(&utext);
        utext_close(&result);
        return NULL;
    }

    utext_close(&utext);
    utext_close(&result);
    free(buffer);

    return result_str;
}

const char* SubstringFromSubstring(const char* str, const char* substring, int m) {
    UErrorCode error = U_ZERO_ERROR;
    UText utext = UTEXT_INITIALIZER;
    u_text_openUTF8(&utext, str, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening UTF-8 text\n");
        return NULL;
    }

    int32_t index = u_text_findStringBackward(&utext, substring, 0, &error);
    if (U_FAILURE(error) || index == -1) {
        fprintf(stderr, "Substring not found or error finding it\n");
        utext_close(&utext);
        return NULL;
    }

    int32_t length = u_text_getLength(&utext);

    // Ensure n and m are within bounds
    if (n < 0 || n >= index) {
        fprintf(stderr, "Invalid starting index\n");
        utext_close(&utext);
        return NULL;
    }
    if (m <= 0 || n + m > length) {
        fprintf(stderr, "Invalid substring length\n");
        utext_close(&utext);
        return NULL;
    }

    UChar* buffer = malloc((m + 1) * sizeof(UChar));
    u_text_setNativeIndex(&utext, index + n);
    int32_t count = u_text_extract(&utext, buffer, m, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error extracting text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }
    buffer[count] = '\0';

    UText result = UTEXT_INITIALIZER;
    u_text_openUChars(&result, buffer, -1, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error opening resulting UTF-8 text\n");
        free(buffer);
        utext_close(&utext);
        return NULL;
    }

    char* result_str = malloc(u_text_getLength(&result) + 1 * sizeof(char));
    u_text_toUTF8(result_str, -1, &result, &error);
    if (U_FAILURE(error)) {
        fprintf(stderr, "Error converting to UTF-8\n");
        free(buffer);
        utext_close(&utext);
        utext_close(&result);
        return NULL;
    }

    utext_close(&utext);
    utext_close(&result);
    free(buffer);

    return result_str;
}
```
