#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char extra[] = "little";
  char new_str[100]; // Assuming the final string won't exceed 100 characters

  // Using sprintf to interpolate the variable into the string
  sprintf(new_str, "Mary had a %s lamb.", extra);

  printf("%s\n", new_str);

  return 0;
}