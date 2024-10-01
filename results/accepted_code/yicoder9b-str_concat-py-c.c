#include <stdio.h>
#include <string.h>

int main() {
  char s1[20] = "hello";
  printf("%s world\n", s1);

  char s2[20];
  strcpy(s2, s1);
  strcat(s2, " world");
  printf("%s\n", s2);

  char s3[50] = "hello";
  strcat(s3, " world mom");
  printf("%s\n", s3);

  return 0;
}