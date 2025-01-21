#include <stdio.h>
#include <stdlib.h> // Include stdlib.h library for malloc and free functions
#include <string.h>

int main() {
  char s1[20] = "Hello";
  const char *s2 = ", World";

  size_t len = strlen(s1) + strlen(s2) + 1;
  char *s3 =
      (char *)malloc(sizeof(char) * len); // Allocate memory for combined string

  strcpy(s3, s2);
  strcat(s3, s1);

  printf("%s\n", s3);
  free(s3); // Don't forget to free the allocated memory after it is no longer
            // needed.
  return 0;
}