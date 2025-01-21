#include <stdio.h>
#include <string.h>

int main() {
  // Declare and initialize the first string variable
  char s1[] = "hello";

  // Concatenate another string literal to form a new string
  char s2[50];
  strcpy(s2, s1);
  strcat(s2, " world");

  printf("s1: %s\n", s1); // Output: hello
  printf("s2: %s\n", s2); // Output: hello world

  // Concatenate multiple strings using a loop and strcat
  char result[50];
  strcpy(result, s1);
  strcat(result, ", ");
  strcat(result, "world");
  strcat(result, ", ");
  strcat(result, "mom");

  printf("result: %s\n", result); // Output: hello, world, mom

  return 0;
}