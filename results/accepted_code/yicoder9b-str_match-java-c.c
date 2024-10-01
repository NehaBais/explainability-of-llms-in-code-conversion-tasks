#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool starts_with(char *str, char *prefix) {
  return strncmp(str, prefix, strlen(prefix)) == 0;
}

bool ends_with(char *str, char *suffix) {
  int lenstr = strlen(str);
  int lensuffix = strlen(suffix);
  if (lensuffix > lenstr)
    return false;
  return strncmp(str + lenstr - lensuffix, suffix, lensuffix) == 0;
}

bool contains(char *str, char *substr) {
  if (strstr(
          str,
          substr)) { // returns a pointer to the first occurrence of substring
                     // in string. If substring is not found, it returns NULL.
    return true;
  } else {
    return false;
  }
}

int get_location(char *str, char *substr) {
  char *position = strstr(
      str, substr); // returns a pointer to the first occurrence of substring in
                    // string. If substring is not found, it returns NULL.
  if (!position) {
    return -1;
  } else {
    return position - str;
  }
}

int main() {
  char str[50] = "Hello World";
  printf(starts_with(str, "He") ? "Starts with prefix\n"
                                : "Does not start with prefix \n");
  printf(ends_with(str, "ld") ? "Ends with suffix\n"
                              : "Does not end with suffix\n");
  printf(contains(str, "Wor") ? "Contains substring\n"
                              : "Does not contain substring\n");
  int loc = get_location(str, "o");
  if (loc != -1) {
    printf("Location: %d \n", loc);
  } else {
    printf("Substring not found. \n");
  }
  return (0);
}