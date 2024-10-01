#include <stdio.h>
#include <string.h>

// Function to check if a given string starts with another
int startsWith(char *str1, char *str2) {
  int m = strlen(str1);
  int n = strlen(str2);

  // If length of str2 is greater than str1
  if (n > m)
    return 0;

  for (int i = 0; i < n; i++)
    if (str1[i] != str2[i])
      return 0;

  return 1;
}

// Function to check if a given string contains another string at any location
int findString(char *haystack, char *needle) {
  int m = strlen(haystack);
  int n = strlen(needle);

  // Search for the first character
  for (int i = 0; i <= m - n; i++) {
    int j;

    // Check if the characters match at every index
    for (j = 0; j < n; j++)
      if (haystack[i + j] != needle[j])
        break;

    // If all characters match, return the current index
    if (j == n)
      return i;
  }

  // If no character matches, return -1
  return -1;
}

// Function to check if a given string ends with another string
int endsWith(char *str1, char *str2) {
  int m = strlen(str1);
  int n = strlen(str2);

  // If length of str2 is greater than str1
  if (n > m)
    return 0;

  for (int i = 1; i <= n; i++)
    if (str1[m - i] != str2[n - i])
      return 0;

  return 1;
}

// Driver Code
int main() {
  char str1[] = "abcd";
  char str2[] = "ab";
  printf("%d\n", startsWith(str1, str2)); // Returns true

  char str3[] = "abcd";
  char str4[] = "zn";
  printf("%d\n", endsWith(str3, str4)); // Returns false

  char str5[] = "abab";
  char str6[] = "bb";
  printf("%d\n", containsString(str5, str6)); // Returns false

  char str7[] = "abab";
  char str8[] = "ab";
  int loc = findString(str7, str8);
  if (loc == -1)
    printf("Substring not found\n");
  else
    printf("%d\n", loc); // Returns 0

  loc = findString(str7, str8, loc + 1);
  if (loc == -1)
    printf("Substring not found\n");
  else
    printf("%d\n", loc); // Returns 2

  return 0;
}