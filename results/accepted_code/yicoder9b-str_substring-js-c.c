#include <stdio.h>
#include <string.h>

// Function to get substring from n characters with m length
char *substr_nm(const char *src, int n, int m) {
  static char res[1024]; // the result string
  int len = strlen(src);
  if (n < len && m > 0 && n + m <= len) {
    strncpy(res, src + n, m); // Copy m characters starting from position n.
    res[m] = '\0';            // Add null character to mark the end of string
  } else {
    *res = '\0'; // Return an empty string if the parameters are not valid
  }
  return res;
}

// Function to get substring from n characters till the end
char *substr_n(const char *src, int n) {
  static char res[1024]; // the result string
  int len = strlen(src);
  if (n < len) {
    strcpy(res, src + n); // Copy characters starting from position n till end.
  } else {
    *res = '\0'; // Return an empty string if the parameters are not valid
  }
  return res;
}

// Function to get substring from a known character with m length
char *substr_known_m(const char *src, const char *character, int m) {
  static char res[1024]; // the result string
  int len = strlen(src);
  char *pos = strstr(
      src, character); // find first occurrence of a character in a string
  if (pos && ((pos - src) + m <= len)) {
    strncpy(res, pos, m); // Copy m characters starting from this position.
    res[m] = '\0';        // Add null character to mark the end of string
  } else {
    *res = '\0'; // Return an empty string if the parameters are not valid
  }
  return res;
}

// Function to get substring from a known substring with m length
char *substr_known(const char *src, const char *substring, int m) {
  static char res[1024]; // the result string
  int len = strlen(src);
  char *pos = strstr(
      src, substring); // find first occurrence of a substring in a string
  if (pos && ((pos - src) + m <= len)) {
    strncpy(res, pos, m); // Copy m characters starting from this position.
    res[m] = '\0';        // Add null character to mark the end of string
  } else {
    *res = '\0'; // Return an empty string if the parameters are not valid
  }
  return res;
}

// Function to get all characters minus last
char *substr_minus1(const char *src) {
  static char res[1024]; // the result string
  int len = strlen(src);
  if (len > 0) {
    strncpy(res, src, len - 1); // Copy all characters except last.
    res[len - 1] = '\0';        // Add null character to mark the end of string
  } else {
    *res = '\0'; // Return an empty string if the parameters are not valid
  }
  return res;
}

int main() {
  char str[] = "abcdefgh";
  int n = 2, m = 3;
  printf("%s\n",
         substr_nm(str, n, m));     // starting from n characters with m length
  printf("%s\n", substr_n(str, n)); // starting from n characters till the end
  printf("%s\n", substr_minus1(str)); // all characters minus last
  printf("%s\n",
         substr_known_m(str, "b",
                        m)); // starting from a known character with m length
  printf("%s\n",
         substr_known(str, "bc",
                      m)); // starting from a known substring with m length
}