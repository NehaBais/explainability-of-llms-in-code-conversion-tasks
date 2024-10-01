#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "foo";
  char str2[] = "bar";

  strcat(str1, str2);

  printf("%s\n", str1);

  return 0;
}