#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "abcdefgh";

  int n = 2;
  int m = 3;

  //  * starting from n characters in and of m length;
  printf("%s\n", &str[n]);

  //  * starting from n characters in, up to the end of the string;
  printf("%.*s\n", strlen(str) - n, &str[n]);

  //  * whole string minus last character;
  printf("%.*s\n", strlen(str) - 1, str);

  //  * starting from a known character within the string and of m length;
  int pos = strchr(str, 'b') - str;
  if (pos != strlen(str)) {
    printf("%.*s\n", m, &str[pos]);
  }

  //  * starting from a known substring within the string and of m length.
  pos = strstr(str, "bc") - str;
  if (pos != strlen(str)) {
    printf("%.*s\n", m, &str[pos]);
  }

  return 0;
}