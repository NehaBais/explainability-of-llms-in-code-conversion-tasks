#include
#include
int main(int argc, char **argv) {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "Ĵ�VÁ");
  compare("Ĵ�VÁ", "ĵãvá");
  return 0;
}
void compare(char *A, char *B) {
  if (strcmp(A, B) == 0) {
    printf("'%s' and '%s' are lexically equal.", A, B);
  } else {
    printf("'%s' and '%s' are not lexically equal.", A, B);
  }
  printf("n");

  if (strncasecmp(A, B, strlen(A)) == 0) {
    printf("'%s' and '%s' are case-insensitive lexically equal.", A, B);
  } else {
    printf("'%s' and '%s' are not case-insensitive lexically equal.", A, B);
  }
  printf("n");

  if (strcmp(A, B) < 0) {
    printf("'%s' is lexically before '%s'.", A, B);
  } else if (strcmp(A, B) > 0) {
    printf("'%s' is lexically after '%s'.", A, B);
  }

  if (strcmp(A, B) >= 0) {
    printf("'%s' is not lexically before '%s'.", A, B);
  }
  if (strcmp(A, B) <= 0) {
    printf("'%s' is not lexically after '%s'.", A, B);
  }

  printf("The lexical relationship is: %d", strcmp(A, B));
  printf("nThe case-insensitive lexical relationship is: %d", strcasecmp(A, B));
}