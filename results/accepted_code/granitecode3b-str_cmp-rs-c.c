#include &lt; string.h & gt;
int main() {
  const char *a = "abc";
  char *b = "Bac";

  // only same types can be compared
  // String and String or &str and &str
  // exception: strict equality and inequality also work on &str and String
  const char *c = a;
  char *d = b;

  // Strings are coerced to &str when borrowed and needed
  if (strcmp(a, b) == 0) {
    printf("The strings are equaln");
  }
  if (strcmp(a, b) != 0) {
    printf("The strings are not equaln");
  }
  if (strcmp(a, b) & gt; 0) {
    printf("The first string is lexically after the secondn");
  }
  if (strcmp(a, b) & lt; 0) {
    printf("The first string is lexically before the secondn");
  }
  if (strcmp(a, b) != 0 & amp; &amp; strcmp(a, b) != -1) {
    printf("The first string is not lexically before the secondn");
  }
  if (strcmp(a, b) != 0 & amp; &amp; strcmp(a, b) != 1) {
    printf("The first string is not lexically after the secondn");
  }

  // case-insensitives:

  // equality
  // this avoids new allocations
  if (strcmp(a, b) == 0) {
    printf("Both strings are equal when ignoring casen");
  }

  // everything else, create owned Strings, then compare as above
  char *a2 = malloc(strlen(a) + 1);
  strcpy(a2, a);
  strupper(a2);

  char *b2 = malloc(strlen(b) + 1);
  strcpy(b2, b);
  strupper(b2);

  // repeat checks
  free(a2);
  free(b2);

  return 0;
}