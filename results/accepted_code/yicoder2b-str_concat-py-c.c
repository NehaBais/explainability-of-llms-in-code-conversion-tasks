#include <stdio.h>
#include <string.h>
int main() {
  char s1[20] = "hello"; // String variable
  strcat(s1, " world");  // Concatenation of string and string literal
  printf("%s\n", s1);    // Print the contents of variable

  char s2[50];
  strcpy(s2, s1);     // Copying string to another dynamically created string
  printf("%s\n", s2); // Print the contents of variable

  char *s3[] = {"hello", "world", "mom"}; // Array of strings
  strcat(s1, ", ");                       // Adding a string to string literal
  strcat(s1, s3[0]);                      // Concatenating with array elements
  strcat(s1, ", ");   // Adding another string to string literal
  strcat(s1, s3[1]);  // Appending the second element of array to string
  strcat(s1, ", ");   // Adding a string to string literal
  strcat(s1, s3[2]);  // Concatenating with array elements
  printf("%s\n", s1); // Print the contents of variable

  char s4[50];
  strcpy(s4, s1);     // Copying string to another dynamically created string
  printf("%s\n", s4); // Print the contents of variable
  return 0;
}