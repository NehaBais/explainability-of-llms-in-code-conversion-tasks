#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);
  char s2[100] = s;       // Here we assume 100 as the size of string 's'
  strcat(s2, " literal"); // strcat for concatenating
  printf("%s\n", s2);     // prints the combined string
  return 0;
}