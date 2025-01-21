 The error is caused by the compiler not recognizing `strlen` function because it's not included in our program. The C Standard Library needs to be included at the top of the file for us to use functions like `strlen`. 

The fix is to include `<string.h>` header, which contains the definition for `strlen` function:
```c
#include <stdio.h>
#include <string.h> // Include string library
#define SIZE 100

int main() {
  char str[SIZE] = "12345678";
  int n;

  sprintf(str + strlen(str), "%s", "9!");

  printf("%s\n", str);

  return 0;
}
```
