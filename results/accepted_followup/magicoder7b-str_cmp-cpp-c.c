#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void demo_compare(const char *a, const char *b) {
  char *a_copy = strdup(a);
  char *b_copy = strdup(b);

  printf("%s and %s are ", a_copy, b_copy);
  if (strcmp(a_copy, b_copy) == 0) {
    printf("exactly lexically equal.\n");
  } else {
    printf("not exactly lexically equal.\n");
  }

  printf("%s and %s are ", a_copy, b_copy);
  if (strcmp(a_copy, b_copy) != 0) {
    printf("lexically inequal.\n");
  } else {
    printf("lexically equal.\n");
  }

  printf("%s is ", a_copy);
  if (strcmp(a_copy, b_copy) < 0) {
    printf("lexically ordered before %s.\n", b_copy);
  } else {
    printf("not lexically ordered before %s.\n", b_copy);
  }

  printf("%s is ", a_copy);
  if (strcmp(a_copy, b_copy) > 0) {
    printf("lexically ordered after %s.\n", b_copy);
  } else {
    printf("not lexically ordered after %s.\n", b_copy);
  }

  free(a_copy); // Don't forget to free the dynamic memory
  free(b_copy);
}

int main(int argc, char *argv[]) {
  const char *a = (argc > 1) ? argv[1] : "1.2.Foo";
  const char *b = (argc > 2) ? argv[2] : "1.3.Bar";

  demo_compare(a, b);

  double numA = atof(argv[1]);
  double numB = atof(argv[2]);
  demo_compare(numA, numB);

  if (strcmp(a, b) == 0) {
    return EXIT_SUCCESS;
  } else {
    return EXIT_FAILURE;
  }
}