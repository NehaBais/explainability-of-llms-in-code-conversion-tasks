Error: 
The error is that the `strcmp()` function is not declared in the standard library, so the compiler cannot find it to use.
Fix:
Add the header file `<string.h>` to include the declaration of `strcmp()`.

Rewritten Code:
```c
#include stdio.h>
int main() {
  char *a = "YUP";
  char *b = "BALL";
  int result = 0;
  
  if (strcmp(a, b) < 0) {
    printf("%s is less than %s", a, b);
  } else if (strcmp(a, b) == 0) {
    printf("%s is equal to %s", a, b);
  } else {
    printf("%s is greater than %s", a, b);
  }
  
  a = "24";
  b = "123";
  
  if (strcmp(a, b) < 0) {
    printf("%s is less than %s", a, b);
  } else if (strcmp(a, b) == 0) {
    printf("%s is equal to %s", a, b);
  } else {
    printf("%s is greater than %s", a, b);
  }
  
  a = "5.0";
  b = "5";
  
  if (strcmp(a, b) < 0) {
    printf("%s is less than %s", a, b);
  } else if (strcmp(a, b) == 0) {
    printf("%s is equal to %s", a, b);
  } else {
    printf("%s is greater than %s", a, b);
  }
  
  return 0;
}
```

