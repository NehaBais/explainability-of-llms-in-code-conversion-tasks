#include <stdio.h>
#include <string.h>

int main() {
  char string[] = "def";
  char temp[10]; // Assuming the final string won't exceed 9 characters
  strcpy(temp, "abc");
  strcat(temp, string);
  strcpy(string, temp);
  printf("%s", string);
  return 0;
}