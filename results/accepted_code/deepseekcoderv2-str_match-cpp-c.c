#include <stdio.h>
#include <string.h>
int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[5] = "ab";
  // Beginning
  int compare = strncmp(s1, s3, strlen(s3));
  if (compare == 0)
    printf("String matches\n");
  else if (compare < 0) {
    printf("%s is less than %s", s1, s2);
  } else {
    printf("%s is greater than %s", s1, s2);
  }
  // End
  if (strncmp(s1 + strlen(s3), s3, strlen(s3)) == 0)
    printf("String matches\n");
  // Anywhere
  char *ptr = strstr(s2, s3);
  if (ptr != NULL) {
    // Found string at location ptr - s2
    printf("%c", *ptr);
  } else
    printf("Not found");
}