Answer:
In C, you can use the strcat function to append a string literal to another string. The following code demonstrates how to do this in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "12345678";
  char* str2 = "9!";
  strcat(str, str2);
  printf("%s\n", str);
  return 0;
}
```
This code will output the following:

123456789!
