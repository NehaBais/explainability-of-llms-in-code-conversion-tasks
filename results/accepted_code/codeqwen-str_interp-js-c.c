#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb";
  char little[] = "little";
  char replaced[100]; // assuming maximum string length of 99 characters plus
                      // null terminator

  strcpy(replaced,
         original); // copy the original string to the replaced variable
  strcat(replaced, little + 1); // concatenate the second part of little (after
                                // the first character) to the end of replaced

  printf("%s\n", replaced);

  return 0;
}