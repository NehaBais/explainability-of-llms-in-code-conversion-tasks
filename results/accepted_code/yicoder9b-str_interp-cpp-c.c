#include <stdio.h>
#include <string.h>

int main(void) {
  char original[] = "Mary had a X lamb.";
  char replacement[] = "little";
  char newString[100];
  strcpy(newString, original); // Copy the original string to new String
  sprintf(newString, "%s%s%s%s", newString, strtok(newString, "X"), replacement,
          strtok(NULL, "\0"));
  printf("String after replacement: %s \n", newString);
  return 0;
}