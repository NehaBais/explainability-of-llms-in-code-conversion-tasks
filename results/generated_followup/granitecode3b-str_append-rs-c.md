Error: Call to undeclared library function with type 'unsigned long (const char *)'; ISO C99 and later do not support implicit function declarations.
Fix: Include the header <string.h> or explicitly provide a declaration for 'strlen', 'strcpy', 'strcat', and 'printf'.
```c
#include 
int main() {
  char *str = "Hello world";
  char *appendage = "!!!!";
  char result[strlen(str) + strlen(appendage)];
  strcpy(result, str);
  strcat(result, appendage);
  printf("%s", result);
  return 0;
}
```

