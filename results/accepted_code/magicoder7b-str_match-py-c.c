#include <stdio.h>
#include <string.h>

char *startswith(const char *s1, const char *s2) {
  size_t len = strlen(s2);
  if (strncmp(s1, s2, len) == 0) {
    return s1;
  } else {
    return NULL;
  }
}

char *endswith(const char *s1, const char *s2) {
  size_t len = strlen(s2);
  if (strcmp(s1 + strlen(s1) - len, s2) == 0) {
    return s1;
  } else {
    return NULL;
  }
}

char *contains(const char *haystack, const char *needle) {
  size_t haystack_len = strlen(haystack);
  size_t needle_len = strlen(needle);
  for (size_t i = 0; i <= haystack_len - needle_len; ++i) {
    if (strncmp(haystack + i, needle, needle_len) == 0) {
      return haystack + i;
    }
  }
  return NULL;
}

int main() {
  const char *s1 = "abcd";
  const char *s2 = "ab";
  const char *s3 = "zn";

  if (startswith(s1, s2) != NULL) {
    printf("1. The first string starts with the second.\n");
  } else {
    printf("1. The first string does not start with the second.\n");
  }

  if (endswith(s1, s3) == NULL) {
    printf("2. The first string ends with the third.\n");
  } else {
    printf("2. The first string does not end with the third.\n");
  }

  const char *p = contains(s1, s2);
  if (p != NULL) {
    printf("3. The first string contains the second at position %d.\n",
           (int)(p - s1));
  } else {
    printf("3. The first string does not contain the second.\n");
  }

  return 0;
}