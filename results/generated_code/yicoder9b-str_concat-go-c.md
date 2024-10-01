Here is the equivalent C code for your Golang program: 

```c
#include <stdio.h>

int main() {
  // text assigned to a string variable
  char s[] = "hello";

  // output string variable
  printf("%s\n", s);

  // concatenate original and another literal, assign result to another string variable
  char s2[15]; 
  sprintf(s2, "%s literal", s);

  // output second string variable
  printf("%s\n", s2);

  return 0;
}
```

This C code does the same thing as your Golang program: it declares two strings `s` and `s2`, prints them out their values. The first one is just "hello" while for the second one we concatenate "hello" with another string literal "literal" using sprintf function which serves a similar purpose to how `+` operator in Golang does when used for string concatenation.
