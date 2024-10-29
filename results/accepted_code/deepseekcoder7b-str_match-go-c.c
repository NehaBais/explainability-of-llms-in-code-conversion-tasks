#include <stdio.h>
#include <string.h>

void starts_with(const char *str, const char *start) {
  if (strncmp(str, start, strlen(start)) == 0) {
    printf("1. %s starts with %s: true\n", str, start);
  } else {
    printf("1. %s starts with %s: false\n", str, start);
    <｜begin▁of▁sentence｜> has_substring(const char *str, const char *sub) {
      const char *p = strstr(str, sub);
      if (p == NULL) {
        printf("2. %s contains %s: false\n", str, sub);
      } else {
        printf("2. %s contains %s: true\n", str, sub);
        for (int i = 0;; ++i) {
          const char *q = strstr(str + i, sub);
          if (q == NULL)
            break;
          printf("2.%d at location %lu\n", i + 1, (unsigned long)(q - str));
        }
      }
    }

    void ends_with(const char *str, const char *end) {
      size_t lenstr = strlen(str);
      size_t lenend = strlen(end);
      if (lenstr >= lenend &&
          strncmp(str + lenstr - lenend, end, lenend) == 0) {
        printf("3. %s ends with %s: true\n", str, end);
      } else {
        printf("3. %s ends with %s: false\n", str, end);
      }
    }

    int main() {
      starts_with("abracadabra", "abr");
      has_substring("abracadabra", "abr");
      ends_with("abracadabra", "bra");
      return 0;
    }