#include <stdio.h>
#include <string.h>

int main(void) {
  // Check if the first string starts with second string
  const char *s1 = "abcd";
  const char *s2 = "abc";
  int startWith = strncmp(s1, s2, strlen(s2));
  printf("startsWith: %d\n",
         startWith == 0); // returns true (non-zero) if strings are the same

  // Check if the first string contains the second string at any location
  const char *s3 = "abcd";
  const char *s4 = "bcd";
  char *found = strstr(s3, s4);
  printf("contains: %d\n",
         found != NULL); // returns true (non-zero) if substring is found
  if (found != NULL) {
    printf("location of match for contains: %ld\n", found - s3);
  }

  // Check if the first string ends with second string
  const char *s5 = "abcd";
  const char *s6 = "bcd";
  int endWith = strncmp(s5 + strlen(s5) - strlen(s6), s6, strlen(s6));
  printf("endsWith: %d\n",
         endWith == 0); // returns true (non-zero) if strings are the same

  return 0;
}