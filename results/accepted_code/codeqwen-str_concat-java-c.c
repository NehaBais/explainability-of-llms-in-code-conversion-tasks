#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);
  char s2[100];  // Ensure there is enough space for the concatenated string
  strcpy(s2, s); // Copy the original string to s2
  strcat(s2, " literal"); // Concatenate the second string to s2
  printf("%s\n", s2);
  return 0;
}