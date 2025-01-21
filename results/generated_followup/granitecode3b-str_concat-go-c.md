Error: Call to undeclared library function 'printf' with type 'int (const char *, ...)'; ISO C99 and later do not support implicit function declarations
Fix: Include the header <stdio.h> or explicitly provide a declaration for 'printf'
Rewritten code in a single code block:
```c
#include
int main() {
  char s[] = "hello";
  printf("%s", s);
  printf(" %s", s);
  char s2[strlen(s) + 6];
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("n%s", s2);
  return 0;
}
```

