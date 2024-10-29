#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "12345678";
  char prepend[9]; // allocate enough space for the prepended string plus null
                   // terminator

  strcpy(prepend, "0");
  strcat(prepend, s); // append old string to new one

  printf("%s\n", prepend);

  return 0;
}