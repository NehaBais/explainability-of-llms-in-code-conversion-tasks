#include
#include
#include
#include
#include
#include
#include
void demo_compare(const char *a, const char *b, const char *semantically) {
  printf("%s and %s are %s%sequal.\n", a, b,
         ((strcmp(a, b) == 0) ? "" : "not "), semantically);
  printf("%s and %s are %s%sinequal.\n", a, b,
         ((strcmp(a, b) != 0) ? "" : "not "), semantically);
}
int main(int argc, char *argv[]) {
  // Case-sensitive comparisons.
  char *a = (argc > 1) ? argv[1] : "1.2.Foo";
  char *b = (argc > 2) ? argv[2] : "1.3.Bar";
  demo_compare(a, b, "lexically");
  // Case-insensitive comparisons by folding both strings to a common case.
  int i;
  for (i = 0; a[i]; ++i) {
    a[i] = tolower(a[i]);
  }
  for (i = 0; b[i]; ++i) {
    b[i] = tolower(b[i]);
  }
  demo_compare(a, b, "lexically");
  // Numeric comparisons.
  double numA, numB;
  sscanf(argv[1], "%lf", &numA);
  sscanf(argv[2], "%lf", &numB);
  demo_compare(&numA, &numB, "numerically");
  return 0;
}