#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char c[] = "cat";
  char d[] = "dog";

  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %s\n", c, d);
  } else {
    printf("%s is bytewise different from %s\n", c, d);
  }

  if (strcmp(c, d) > 0) {
    printf("%s is lexically greater than %s\n", c, d);
  } else if (strcmp(c, d) < 0) {
    printf("%s is lexically less than %s\n", c, d);
  }

  if (strcasecmp(c, d) == 0) {
    printf("%s equal to %s when interpreted as UTF-8 and compared under "
           "Unicode simple case folding rules.\n",
           c, d);
  } else {
    printf("%s not equal to %s when interpreted as UTF-8 and compared under "
           "Unicode simple case folding rules.\n",
           c, d);
  }

  return 0;
}