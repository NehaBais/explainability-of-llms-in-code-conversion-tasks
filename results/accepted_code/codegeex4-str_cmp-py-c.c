#include <ctype.h>
#include <stdio.h>
#include <string.h>

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

  // In C you can't directly compare two integers as strings.
  // If you want to compare them as integer, you need to convert the string into
  // an integer.
  int a = atoi("24");
  int b = atoi("123");
  printf("%d is of type %s and %d is of type %s\n", a, "int", b, "int");
  if (a < b)
    printf("%d is strictly less than  %d\n", a, b);
  if (a <= b)
    printf("%d is less than or equal to %d\n", a, b);
  if (a > b)
    printf("%d is strictly greater than  %d\n", a, b);
  if (a >= b)
    printf("%d is greater than or equal to %d\n", a, b);

  // Here we compare two floating point numbers.
  float c = 5.0;
  float d = 5;
  printf("%f is of type %s and %f is of type %s\n", c, "float", d, "float");
  if (c > d)
    printf("%f is strictly greater than  %f\n", c, d);

  return 0;
}

char *strlwr(char *str) {
  int i = 0;

  while (str[i]) {
    str[i] = tolower(str[i]);
    i++;
  }

  return str;
}