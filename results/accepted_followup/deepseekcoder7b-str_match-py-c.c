#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to determine if first string starts with second string
int startswith(const char *str, const char *pre) {
  return strncmp(str, pre, strlen(pre)) == 0;
}

// The function endswith is not directly provided by C Standard Library. Hence
// its implementation
int endswith(const char *str, const char *suf) {
  size_t lenstr = strlen(str);
  size_t lensuf = strlen(suf);
  if (lensuf > lenstr)
    return 0;
  return strncmp(str + lenstr - lensuf, suf, lensuf) == 0;
}

// Function to find an instance of a substring within another string.
const char *find_substring(const char *str, const char *substr) {
  return strstr(str, substr);
}

int main() {
  // Calling the functions with examples from your Python code and printing
  // results:

  printf("%s\n", startswith("racecar", "rac") ? "True" : "False");
  printf("%s\n", endswith("racecar", "car") ? "True" : "False");
  printf("%s\n",
         find_substring("Hello, world.", "world.") != NULL ? "True" : "False");

  return 0;
}