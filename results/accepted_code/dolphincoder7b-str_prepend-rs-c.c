#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "World";   // create an array for the string
  strcat(s, "Hello  "); // append "Hello " to the end of the string
  printf("%s\n", s);    // print the modified string
  return 0;
}