#include <ctype.h>
#include <stdio.h>
#include <string.h>

void demo_compare(const char *a, const char *b, const char *semantically) {
  if (strcmp(a, b) == 0)
    printf("%s and %s are exactly %s equal.\n", a, b, semantically);
  else
    printf("%s and %s are not %s equal.\n", a, b, semantically);

  if (strcmp(a, b) != 0)
    printf("%s and %s are %s inequal.\n", a, b, semantically);
  else
    printf("%s and %s are not %s inequal.\n", a, b, semantically);

  if (strcmp(a, b) < 0)
    printf("%s is lexically ordered before %s.\n", a, b);
  else
    printf("%s is not lexically ordered before %s.\n", a, b);

  if (strcmp(a, b) > 0)
    printf("%s is lexically ordered after %s.\n", a, b);
  else
    printf("%s is not lexically ordered after %s.\n", a, b);
}

int main(int argc, char *argv[]) {
  // Case-sensitive comparisons.
  const char *a = (argc > 1) ? argv[1] : "1.2.Foo";
  const char *b = (argc > 2) ? argv[2] : "1.3.Bar";

  demo_compare(a, b, "lexically");

  // Case-insensitive comparisons by folding both strings to a common case.
  int i, j;
  for (i = 0; a[i]; i++)
    a[i] = tolower((unsigned char)a[i]);
  for (j = 0; b[j]; j++)
    b[j] = tolower((unsigned char)b[j]);

  demo_compare(a, b, "lexically");

  // Numeric comparisons.
  double numA, numB;
  sscanf(a, "%lf", &numA);
  sscanf(b, "%lf", &numB);

  if (numA < numB)
    printf("%lf is numerically less than %lf.\n", numA, numB);
  else
    printf("%lf is not numerically less than %lf.\n", numA, numB);

  if (numA > numB)
    printf("%lf is numerically greater than %lf.\n", numA, numB);
  else
    printf("%lf is not numerically greater than %lf.\n", numA, numB);

  return strcmp(a, b) == 0 ? 0 : 1;
}