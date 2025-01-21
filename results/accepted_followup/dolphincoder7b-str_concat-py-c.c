#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *s1 = "hello";
  printf("%s world\n", s1);

  // Concatenate strings with join function in Python-like way
  int totalLength =
      strlen(s1) + 6; // Length of " world" and extra space for null terminator
  char *s2 = malloc((totalLength + 1) * sizeof(char));
  strcpy(s2, s1);
  strcat(s2, " world");

  printf("%s\n", s2);

  // Join strings with join function in Python-like way
  totalLength = strlen(s1) + 6;
  char *s3 = malloc((totalLength + 1) * sizeof(char));
  strcpy(s3, ", ");
  strcat(s3, s1);
  strcat(s3, ", world");
  strcat(s3, ", mom");

  printf("%s\n", s3);

  // Join strings with join function in Python-like way
  totalLength = strlen(s1) + 6;
  char *s4 = malloc((totalLength + 1) * sizeof(char));
  strcpy(s4, ", ");
  strcat(s4, s1);
  strcat(s4, ", world");
  strcat(s4, ", mom");

  printf("%s\n", s4);

  return 0;
}