#include <ctype.h> // For tolower()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void demo_compare(const char *a, const char *b, const char *semantically) {
  printf("%s and %s are %s %s equal.\n", a, b,
         (strcmp(a, b) == 0 ? "" : "not "), semantically);

  printf("%s and %s are %s %s inequal.\n", a, b,
         (strcmp(a, b) != 0 ? "" : "not "), semantically);

  printf("%s is %s %s ordered before %s.\n", a,
         (strcmp(a, b) < 0 ? "" : "not "), semantically, b);

  printf("%s is %s %s ordered after %s.\n", a, (strcmp(a, b) > 0 ? "" : "not "),
         semantically, b);
}

int main(int argc, char *argv[]) {
  // Case-sensitive comparisons.
  char a[128] = (argc > 1) ? argv[1] : "1.2.Foo";
  char b[128] = (argc > 2) ? argv[2] : "1.3.Bar";
  demo_compare(a, b, "lexically");

  // Case-insensitive comparisons by folding both strings to a common case.
  for (char *p = a; *p != '\0'; p++)
    *p = tolower(*p);
  for (char *p = b; *p != '\0'; p++)
    *p = tolower(*p);
  demo_compare(a, b, "lexically");

  // Numeric comparisons. Note that in C, 'double' could be any type for which
  // the relevant comparison operator is defined, eg int, long, etc.
  char *end;
  double numA = strtod(a, &end);
  double numB = strtod(b, &end);
  demo_compare(&numA, &numB, "numerically");

  return (strcmp(a, b) == 0);
}