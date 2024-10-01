#include <stdio.h>
#include <string.h>

// Function to extract substring by index and length
void Substring(char *str, int n, int m, char *result) {
  strncpy(result, str + n, m);
  result[m] = '\0';
}

// Function to extract substring from a given index until the end of the string
void SubstringEnd(char *str, int n, char *result) { strcpy(result, str + n); }

// Function to remove the last character from a string and store it in another
// variable
void RemoveLastChar(char *str, char *result) {
  strncpy(result, str, strlen(str) - 1);
  result[strlen(str) - 1] = '\0';
}

// Functions to extract substring by character or substring occurrence would
// need additional logic to handle Unicode code points.