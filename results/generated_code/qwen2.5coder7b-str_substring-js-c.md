The C programming language does not natively support Unicode or UTF-8 out-of-the-box, but it can certainly handle strings as arrays of bytes, including UTF-8 encoded strings. However, working with individual Unicode code points requires more complex handling than just accessing bytes. 

Here is a very simplified version of the functionality you requested in C:

```c
#include <stdio.h>
#include <wchar.h>

int main() {
    wchar_t str[] = L"abcdefgh";
    int n = 2;
    int m = 3;

    // starting from n characters in and of m length
    wprintf(L"%ls\n", str + n);

    // starting from n characters in, up to the end of the string
    wprintf(L"%ls\n", str + n);
    
    // whole string minus last character
    str[wcslen(str) - 1] = L'\0';
    wprintf(L"%ls\n", str);

    // start from a known character within the string and of m length
    wchar_t *pos = wcsstr(str, L"b");
    if(pos != NULL){
        pos += n;
        wprintf(L"%ls\n", pos);
    } else {
        printf("Character not found in string.\n");
    }

    // start from a known substring within the string and of m length
    pos = wcsstr(str, L"bc");
    if(pos != NULL){
        pos += n;
        wprintf(L"%ls\n", pos);
    } else {
        printf("Substring not found in string.\n");
    }

    return 0;
}
```

The `wchar_t` type is used to represent Unicode characters. This code assumes that the source code and environment are already set up for handling UTF-16 or UTF-32 encoded wide strings, which is a common setup for C programs using the Windows API.

However, this program doesn't handle UTF-8 correctly because `wchar_t` in most C environments refers to a 16-bit character type, not an arbitrary width like UTF-8. Also, handling UTF-8 requires more sophisticated code than what's provided here. 

If you need to work with UTF-8 strings in C, consider using a library that provides support for Unicode and UTF-8, such as ICU (International Components for Unicode). Note that this will increase the complexity of your program significantly.
