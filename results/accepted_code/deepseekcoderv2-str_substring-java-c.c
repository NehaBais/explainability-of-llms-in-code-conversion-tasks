#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to get a substring starting from index n with length m
char *Substring(const char *str, int n, int m) {
  int len = strlen(str);
  if (n + m > len) {
    return NULL; // Return null if the requested substring is out of bounds
  }
  char *result = (char *)malloc((m + 1) * sizeof(char));
  strncpy(result, str + n, m);
  result[m] = '\0'; // Null-terminate the string
  return result;
}

// Function to get a substring starting from index n to the end of the string
char *SubstringFromIndex(const char *str, int n) {
  int len = strlen(str);
  if (n >= len) {
    return NULL; // Return null if the requested substring is out of bounds
  }
  char *result = (char *)malloc((len - n + 1) * sizeof(char));
  strcpy(result, str + n);
  return result;
}

// Function to get a substring excluding the last character
char *SubstringExcludingLast(const char *str) {
  int len = strlen(str);
  if (len == 0) {
    return NULL; // Return null for an empty string
  }
  char *result = (char *)malloc((len) * sizeof(char));
  strncpy(result, str, len - 1);
  result[len - 1] = '\0'; // Null-terminate the string
  return result;
}

// Function to get a substring starting from a known character within the string
// and of m length
char *SubstringFromCharacter(const char *str, char c, int m) {
  int index = strchr(str, c) - str; // Find the position of the character
  if (index == -1 || index + m > strlen(str)) {
    return NULL; // Return null if the requested substring is out of bounds
  }
  char *result = (char *)malloc((m + 1) * sizeof(char));
  strncpy(result, str + index, m);
  result[m] = '\0'; // Null-terminate the string
  return result;
}

// Function to get a substring starting from a known substring within the string
// and of m length
char *SubstringFromSubstring(const char *str, const char *sub, int m) {
  int index = strstr(str, sub) - str; // Find the position of the substring
  if (index == -1 || index + m > strlen(str)) {
    return NULL; // Return null if the requested substring is out of bounds
  }
  char *result = (char *)malloc((m + 1) * sizeof(char));
  strncpy(result, str + index, m);
  result[m] = '\0'; // Null-terminate the string
  return result;
}

int main() {
  const char *str = "Hello, World!";

  char *sub1 = Substring(str, 7, 5);
  printf("Substring from index 7 with length 5: %s\n", sub1);
  free(sub1);

  char *sub2 = SubstringFromIndex(str, 7);
  printf("Substring from index 7 to the end: %s\n", sub2);
  free(sub2);

  char *sub3 = SubstringExcludingLast(str);
  printf("Substring excluding last character: %s\n", sub3);
  free(sub3);

  char *sub4 = SubstringFromCharacter(str, 'W', 5);
  printf("Substring from character 'W' with length 5: %s\n", sub4);
  free(sub4);

  char *sub5 = SubstringFromSubstring(str, "World", 5);
  printf("Substring from substring 'World' with length 5: %s\n", sub5);
  free(sub5);

  return 0;
}