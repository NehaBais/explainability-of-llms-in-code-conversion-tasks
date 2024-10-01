#include <stdio.h>
#include <string.h>

int main() {
  char greeting[20] = "Hello"; // Here we are assuming that a string with
                               // maximum length 20 can be stored in the array
  strcat(greeting, " , world!");
  printf("%s\n", greeting);
  return 0;
}