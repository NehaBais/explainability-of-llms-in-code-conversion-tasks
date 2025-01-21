#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Function declaration for strlwr
char *strlwr(char *str);

void compare(char *a, char *b) {
  printf("%s is of type %s and %s is of type %s\n", a, "char*", b, "char*");
  if (strcmp(a, b) < 0)
    printf("%s is strictly less than  %s\n", a, b);
  if (strcmp(a, b) <= 0)
    printf("%s is less than or equal to %s\n", a, b);
  if (strcmp(a, b) > 0)
    printf("%s is strictly greater than  %s\n", a, b);
  if (strcmp(a, b) >= 0)
    printf("%s is greater than or equal to %s\n", a, b);

  int res = strcmp(strlwr(a), strlwr(b));
  if (res == 0)
    printf("%s is equal to %s in case insensitive manner\n", a, b);

  if (strcmp(a, b) != 0)
    printf("%s is not equal to %s\n", a, b);
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");

  int a = atoi("24");
  int b = atoi("25");

  if (a < b)
    printf("%d is less than %d\n", a, b);

  return 0;
}

char *strlwr(char *str) {
  for (int i = 0; str[i]; i++) {
    str[i] = tolower(str[i]);
  }

  return str;
}