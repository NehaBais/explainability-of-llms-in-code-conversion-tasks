#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "hello";
  printf("%s %s\n", s1, "world"); // Concatenates and prints string

  char s2[50];          // Declare a new array to store concatenated string
  strcpy(s2, s1);       // Copy the original string into new array
  strcat(s2, " world"); // Append the second string to it
  printf("%s\n", s2);   // Prints the concatenated string

  char *str_array[3] = {s1, "world", "mom"}; // Declare an array of strings
  char str_result[100]; // Declare a new string to store result of join function
  strcpy(str_result, ", "); // Copy the first element into it.

  for (int i = 0; i < sizeof(str_array) / sizeof(str_array[0]); ++i) {
    strcat(str_result,
           str_array[i]); // Append each string in array to result string
    if (i != sizeof(str_array) / sizeof(str_array[0]) - 1) {
      strcat(str_result, ", "); // Add a comma and space after each element
                                // except the last one.
    }
  }
  printf("%s\n", str_result); // Print result of join function

  char s3[50];      // Declare another new array to store result of second join
  strcpy(s3, ", "); // Copy the first element into it.

  for (int i = 0; i < sizeof(str_array) / sizeof(str_array[0]); ++i) {
    strcat(s3, str_array[i]); // Append each string in array to result string
    if (i != sizeof(str_array) / sizeof(str_array[0]) - 1) {
      strcat(s3, ", "); // Add a comma and space after each element except the
                        // last one.
    }
  }
  printf("%s\n", s3); // Print result of second join function

  return 0;
}