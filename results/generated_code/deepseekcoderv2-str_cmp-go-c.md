Answer: Here's a C version of the code you provided:

```c
#include <string.h>
#include <stdio.h>

int main() {
  char c[] = "cat";
  char d[] = "dog";
  
  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %s\n", c, d);
  } else {
    printf("%s is not bytewise equal to %s\n", c, d);
  }
  
  if (strcmp(c, d) != 0) {
    printf("%s is not bytewise equal to %s\n", c, d);
  } else {
    printf("%s is bytewise equal to %s\n", c, d);
  }
  
  int cmp = strcmp(c, d);
  if (cmp > 0) {
    printf("%s is lexically greater than %s\n", c, d);
  } else if (cmp < 0) {
    printf("%s is lexically less than %s\n", c, d);
  } else {
    printf("%s and %s are equal in lexicographical order\n", c, d);
  }
  
  return 0;
}
```
