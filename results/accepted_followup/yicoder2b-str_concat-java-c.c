#include <stdio.h>

int main() {
  char *s = "hello";         // Change s to dynamic memory allocation
  printf("%s literal\n", s); // Print first string value
  char s2[10];               // Allocate another 10 characters of memory for s2
  strcpy(s2, s);             // Copy the value of s to s2
  strcat(s2, " literal");    // Concatenate " literal" to s2
  printf("%s\n", s2);        // Print final string value
  return 0;
}