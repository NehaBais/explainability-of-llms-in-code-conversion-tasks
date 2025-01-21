#include <stdio.h>
#include <string.h>

// Function to check if str starts with prefix
int startsWith(const char *str, const char *prefix) {
  return strncmp(str, prefix, strlen(prefix)) == 0;
}

// Function to check if str contains substr at any location
int contains(const char *str, const char *substr) {
  return strstr(str, substr) != NULL;
}

// Function to check if str ends with suffix
int endsWith(const char *str, const char *suffix) {
  int lenStr = strlen(str);
  int lenSuffix = strlen(suffix);
  if (lenSuffix > lenStr)
    return 0;
  return strncmp(&str[lenStr - lenSuffix], suffix, lenSuffix) == 0;
}

// Function to find the location of the first occurrence of substr in str
int indexOf(const char *str, const char *substr) {
  const char *pos = strstr(str, substr);
  if (pos != NULL) {
    return pos - str;
  }
  return -1;
}

// Function to find the location of subsequent occurrences of substr in str
int indexOfSubsequent(const char *str, const char *substr, int startIndex) {
  const char *pos = strstr(&str[startIndex], substr);
  if (pos != NULL) {
    return pos - str;
  }
  return -1;
}

int main() {
  // Test cases
  printf("%d\n", startsWith("abcd", "ab")); // returns 1 (true)
  printf("%d\n", endsWith("abcd", "zn"));   // returns 0 (false)
  printf("%d\n", contains("abab", "bb"));   // returns 1 (true)
  printf("%d\n", contains("abab", "ab"));   // returns 1 (true)

  int loc = indexOf("abab", "bb"); // returns -1
  printf("%d\n", loc);
  loc = indexOf("abab", "ab"); // returns 0
  printf("%d\n", loc);
  loc = indexOfSubsequent("abab", "ab", loc + 1); // returns 2
  printf("%d\n", loc);

  return 0;
}