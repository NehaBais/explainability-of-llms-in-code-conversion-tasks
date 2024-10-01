#include <stdio.h>
#include <string.h>

void compare(char *A, char *B) {
  if (strcmp(A, B) ==
      0) // compares two strings and returns zero if they are equal
    printf("'%s' and '%s' are lexically equal.\n", A, B);
  else
    printf("'%s' and '%s' are not lexically equal.\n", A, B);

  if (stricmp(A, B) ==
      0) // stricmp is a case insensitive version of strcmp function
    printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B);
  else
    printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B);

  if (strcmp(A, B) < 0) // if the return value is less than zero then string A
                        // comes first in lexicographical order
    printf("'%s' is lexically before '%s'.\n", A, B);
  else if (strcmp(A, B) > 0) // if the return value is more than zero then
                             // string B comes first in lexicographical order
    printf("'%s' is lexically after '%s'.\n", A, B);
  else
    printf("'%s' and '%s' are equally lexical.\n", A, B);
}
int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");
}