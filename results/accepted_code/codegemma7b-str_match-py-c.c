#include <string.h>

int startswith(const char *str1, const char *str2) {
  return strncmp(str1, str2, strlen(str2)) == 0;
}

int endswith(const char *str1, const char *str2) {
  return strncmp(str1 + strlen(str1) - strlen(str2), str2, strlen(str2)) == 0;
}

int contains(const char *str1, const char *str2) {
  return strstr(str1, str2) != NULL;
}

int find_first_occurrence(const char *str1, const char *str2) {
  return strstr(str1, str2) - str1;
}

int find_next_occurrence(const char *str1, const char *str2, int start_index) {
  char *ptr = strstr(str1 + start_index, str2);
  return ptr ? ptr - str1 : -1;
}

int main() {
  const char *str1 = "abcd";
  const char *str2 = "ab";

  printf("startswith: %d\n", startswith(str1, str2)); // Output: 1
  printf("endswith: %d\n", endswith(str1, str2));     // Output: 0
  printf("contains: %d\n", contains(str1, str2));     // Output: 1

  int loc = find_first_occurrence(str1, str2);
  printf("First occurrence location: %d\n", loc); // Output: 0

  loc = find_next_occurrence(str1, str2, loc + 1);
  printf("Next occurrence location: %d\n", loc); // Output: -1 (not found)

  return 0;
}