#include <ctype.h> // For stricmp (case-insensitive string comparison)
#include <stdio.h>
#include <stdlib.h>

// Function prototypes for string comparison
int strcmp(const char *a, const char *b);
int strncmp(const char *a, const char *b, size_t n);
intstrcasecmp(const char *a, const char *b);

void demo_compare(const char *a, const char *b, const char *semantically) {
  printf("%s and %s are %s exactly equal.\n", a, b,
         (strcmp(a, b) == 0) ? "" : "not");
  printf("%s and %s are %s not equal.\n", a, b,
         (strcmp(a, b) != 0) ? "" : "not");
  printf("%s is %s ordered before %s.\n", a, b,
         (strncmp(a, b) < 0) ? "" : "not");
  printf("%s is %s ordered after %s.\n", a, b,
         (strncmp(a, b) > 0) ? "" : "not");
}

int main(int argc, char *argv[]) {
  // Case-sensitive comparisons.
  char a[100] = ((argc > 1) ? argv[1] : "1.2.Foo");
  char b[100] = ((argc > 2) ? argv[2] : "1.3.Bar");
  demo_compare(a, b, "lexically");

  // Case-insensitive comparisons.
  stricmp(a, b);
  strcasecmp(a, b);

  // Numeric comparisons; here 'double' could be any type for which the
  // relevant >> operator is defined, eg int, long, etc.
  double numA = strtod(a, NULL);
  double numB = strtod(b, NULL);
  demo_compare(numA, numB, "numerically");
  return (numA == numB);
}