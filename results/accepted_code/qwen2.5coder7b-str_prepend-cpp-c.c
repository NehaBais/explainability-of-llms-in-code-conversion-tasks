#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Define character arrays for the strings
  char myStrings[2][50] = {"prepended to", "my string"};

  // Determine the length of each string and allocate space for the concatenated
  // result
  int len1 = strlen(myStrings[0]);
  int len2 = strlen(myStrings[1]);
  char *prepended = (char *)malloc((len1 + len2 + 1) * sizeof(char));

  if (prepended == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return -1;
  }

  // Concatenate the strings
  strcpy(prepended, myStrings[0]);
  strcat(prepended, myStrings[1]);

  // Output the concatenated string
  printf("%s\n", prepended);

  // Free the allocated memory
  free(prepended);

  return 0;
}