#include <stdio.h>
#include <string.h>
int main() {
  char *a = "24";  // Numeric string
  char *b = "123"; // Numeric string
  if (strcmp(a, b) < 0)
    printf("%s is strictly less than  %s\n", a, b);
  else if (strcmp(a, b) == 0)
    printf("%s is less than or equal to %s\n", a, b);
  // The similar lines of codes can be written for all the cases.
}