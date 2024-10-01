#include <stdio.h>
#include <string.h>

int main() {
  char c[] = "cat";
  char d[] = "dog";

  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %s\n", c, d);
  }
  if (strcmp(c, d) != 0) {
    printf("%s is bytewise different from %s\n", c, d);
  }
  if (strcmp(c, d) > 0) {
    printf("%s is lexically bytewise greater than %s\n", c, d);
  }
  if (strcmp(c, d) < 0) {
    printf("%s is lexically bytewise less than %s\n", c, d);
  }
  if (strcmp(c, d) >= 0) {
    printf("%s is lexically bytewise greater than or equal to %s\n", c, d);
  }
  if (strcmp(c, d) <= 0) {
    printf("%s is lexically bytewise less than or equal to %s\n", c, d);
  }

  // Go is strongly typed and will not directly compare a value of string type
  // with a value of numeric type.

  char eqf[] = "when interpreted as UTF-8 and compared under Unicode simple "
               "case folding rules.";
  if (strcasecmp(c, d) == 0) {
    printf("%s equal to %s, %s\n", c, d, eqf);
  } else {
    printf("%s not equal to %s, %s\n", c, d, eqf);
  }

  // Seeing that the built in operators work bytewise and the library
  // case folding functions interpret UTF-8, you might then ask about
  // other equality and inequality tests that interpret UTF-8.
  // Functions for this are not in the Go standard library but are in
  // the Go "sub repository" at golang.org/x/text.  There is support
  // for Unicode normalization, collation tables, and locale sensitive
  // comparisons.
}