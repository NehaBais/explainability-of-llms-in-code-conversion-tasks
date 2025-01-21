#include
#include
void compare(char *A, char *B) {
  int result = strcmp(A, B);
  if (result == 0)
    printf("'%s' and '%s' are lexically equal.\n", A, B);
  else if (result > 0)
    printf("'%s' is greater than '%s'.\n", A, B);
  else
    printf("'%s' is less than '%s'.\n", A, B);
}