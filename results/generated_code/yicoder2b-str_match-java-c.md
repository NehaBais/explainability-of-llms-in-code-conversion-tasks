Below is the equivalent C code for your requirement:

```C
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool startsWith(const char* str, const char* prefix) {
    return (strncmp(str, prefix, strlen(prefix)) == 0);
}

bool contains(const char* str, const char* substr) {
    size_t sublen = strlen(substr);
    size_t len = strlen(str);
    return (sublen <= len && strncmp(str + len - sublen, substr, sublen) == 0);
}

bool endsWith(const char* str, const char* suffix) {
    size_t suflen = strlen(suffix);
    size_t len = strlen(str);
    return (suflen <= len && strncmp(str + len - suflen, suffix, suflen) == 0);
}

int indexOfSubstring(const char* str, const char* substr, int startIndex) {
    size_t sublen = strlen(substr);
    for (int i = startIndex; i <= strlen(str) - sublen; ++i) {
        if (!strncmp(str + i, substr, sublen)) return i; 
    }
    return -1;
}

void main() {
  const char *str = "abcd";
  const char *prefix = "ab";
  const char *suffix = "zn";
  const char *substr = "bb";

  if(startsWith(str, prefix)) printf("String starts with the prefix\n"); else printf("String does not start with the prefix\n"); 

  if(contains(str, substr)) printf("String contains the substring\n"); else printf("String does not contain the substring\n"); 

  if(endsWith(str, suffix)) printf("String ends with the suffix\n"); else printf("String does not end with the suffix\n"); 

  int loc = indexOfSubstring(str, substr, 0);
  printf("The location of substring in string is: %d\n", loc);
}
```

Note that the `indexOfSubstring` function takes an extra parameter `startIndex` to specify at which position to start looking for the substring. If it's not provided, it defaults to 0.
