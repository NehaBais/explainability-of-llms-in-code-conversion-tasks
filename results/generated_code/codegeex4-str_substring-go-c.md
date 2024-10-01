The Go code provided is using UTF-8 encoding to handle string operations that include multi-byte characters. The C programming language does not natively support Unicode, so we would need to use a library such as ICU (International Components for Unicode) to achieve similar functionality.

For simplicity and brevity, the following example only demonstrates how to extract substrings using standard C functions since the original code uses strings and slices which are more typical in high-level languages. We'll assume that the input string is encoded in UTF-8 and all characters fit into a single byte for this example:

```c
#include <stdio.h>
#include <string.h>

void print_substring(const char *str, int n, int m) {
    const char *start = str + n;
    if (m > 0 && start[0] != '\0') {
        printf("Substring from %d with length %d: ", n, m);
        fwrite(start, sizeof(char), m < strlen(start) ? m : strlen(start), stdout);
        printf("\n");
    } else {
        printf("Invalid substring parameters.\n");
    }
}

int main() {
    char s[] = "ABCDEFGH";
    int n, m;
    
    // for reference
    printf("Index: 01234567\n");
    printf("String:%s\n", s);
    
    // starting from n characters in and of m length
    n = 2; 
    m = 3;
    print_substring(s, n, m);
    
    // starting from n characters in, up to the end of the string
    n = 2; 
    m = -1; // use negative length to signify "to end"
    print_substring(s, n, m);

    // whole string minus last character
    n = 0;
    m = strlen(s) - 1;
    print_substring(s, n, m);
    
    // starting from a known character within the string and of m length
    char search_char = 'D';
    int index = strchr(s, search_char) - s; // find index of first occurrence of 'D'
    if (index != -1) {
        print_substring(s, index, m);
    } else {
        printf("Character '%c' not found in the string.\n", search_char);
    }

    // starting from a known substring within the string and of m length
    char search_substr[] = "DE";
    index = strstr(s, search_substr) - s; // find index of first occurrence of "DE"
    if (index != NULL) {
        print_substring(s, index, m);
    } else {
        printf("Substring 'DE' not found in the string.\n");
    }

    return 0;
}
```

This C code does not handle Unicode characters beyond the Basic Multilingual Plane or encodings other than UTF-8 due to the inherent limitations of the C language. For full Unicode support and more complex text manipulation tasks, using a library like ICU is recommended.

Remember that `strchr` and `strstr` functions return pointers to the found character or substring in the string, respectively. Since we are working with array indices, we subtract the pointer of the initial string from these to get the integer index position. Also note that if no match is found, `strchr` returns a null pointer, which we compare against `-1` for simplicity.
