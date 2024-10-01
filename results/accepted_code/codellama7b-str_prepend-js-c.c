#include <stdio.h>
int main() {
  char *s1 = ", World";
  char *s2 = "Hello";
  char *s3 = (char *)malloc((strlen(s2) + strlen(s1)) * sizeof(char));
  strcpy(s3, s2);
  strcat(s3, s1);
  printf("%s\n", s3);
  return 0;
}