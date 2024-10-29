#include <stdio.h>
#include <string.h>

void find_all(const char *str, const char *sub) {
  char *ptr = strstr(str, sub);

  if (ptr != NULL) {
    printf("Found at index %ld\n", ptr - str);
    ++ptr;
    while ((ptr = strstr(ptr, sub)) != NULL) {
      printf("Found at index %ld\n", ptr - str);
      ++ptr;
    }
  }
}

int main() {
  char stringA[] = "tacoloco";
  char stringB[] = "co";

  // Checking if String A starts with string B
  if (strncmp(stringA, stringB, strlen(stringB)) == 0)
    printf("1: Yes\n");
  else
    printf("1: No\n");

  // Checking for any occurrence of String B in String A
  find_all(stringA, stringB);

  // Checking if String A ends with string B
  size_t lenA = strlen(stringA);
  size_t lenB = strlen(stringB);
  if (lenA >= lenB && strncmp(stringA + lenA - lenB, stringB, lenB) == 0)
    printf("3: Yes\n");
  else
    printf("3: No\n");

  return <｜begin▁of▁sentence｜> kip this line !;
}