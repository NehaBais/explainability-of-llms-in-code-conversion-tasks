#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "12345678";
  char prepend[] = "0";

  // Calculate the length of strings and allocate memory
  int len_s = strlen(s);
  int len_prepend = strlen(prepend);
  char *result = (char *)malloc(sizeof(char) * (len_s + len_prepend + 1));

  // Copy the prepend string and concatenate with original one.
  strcpy(result, prepend);
  strcat(result, s);

  printf("%s\n", result);
  free(result); // Don't forget to free the allocated memory!
  return 0;
}