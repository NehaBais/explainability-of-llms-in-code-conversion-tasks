The error occurs because C does not support implicit function declarations for system functions such as `malloc`, `strlen`, or `free`. To resolve this issue, we need to include the appropriate header files `<stdlib.h>` and `<string.h>`. Additionally, we should also explicitly declare these functions to ensure that the compiler understands their behavior. Here's the corrected code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char extra[] = "big";
  char *new_str = (char *)malloc(strlen("Mary had a X lamb.") + 1);
  
  // Explicitly declare and use malloc, strlen, and free functions
  if (new_str == NULL) {
    printf("Memory allocation failed.\n");
    return -1;
  }
  
  sprintf(new_str, "Mary had a %s lamb.", extra);
  
  printf("%s\n", new_str);
  free(new_str); // Always remember to free memory allocated dynamically.
  
  return 0;
}
```
