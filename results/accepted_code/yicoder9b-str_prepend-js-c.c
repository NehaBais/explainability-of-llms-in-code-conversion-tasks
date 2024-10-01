#include <stdio.h>
#include <string.h>

int main() {
  // define the strings
  char s1[20] = "Hello";
  const char *s2 = ", World";

  // calculate new string length and allocate memory for it
  size_t len =
      strlen(s1) + strlen(s2) +
      1; // extra one is for null character at the end of every c-string.
  char *s3 = (char *)malloc(sizeof(char) * len);

  // combine strings into s3
  strcpy(s3, s2); // start with s2
  strcat(s3, s1); // append s1

  printf("%s\n", s3);
  free(s3); // don't forget to free the memory!
  return 0;
}