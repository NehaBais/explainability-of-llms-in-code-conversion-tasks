#include <stdio.h>
int main() {
  char str[] = "abcdefgh";
  int n = 2;
  int m = 3;

  // * starting from n characters in and of m length;
  printf("%s", str + n);
  printf("n");
  printf("%d", str[n]);
  printf("n");
  printf("%c", str[n]);
  printf("n");
  printf("%sn", str + n + 1);
  printf("n");

  // * starting from n characters in, up to the end of the string;
  printf("%s", str + n);
  printf("n");
  printf("%sn", str + n);
  printf("n");

  // * whole string minus last character;
  printf("%s", str);
  printf("n");
  printf("%c", str[str.length - 1]);
  printf("n");

  // * starting from a known character within the string and of m length;
  int index = str.indexOf('b');
  printf("%sn", str + index);
  printf("n");

  // * starting from a known substring within the string and of m length.
  int start_index = str.indexOf('bc');
  printf("%sn", str + start_index);
  printf("n");

  return 0;
}