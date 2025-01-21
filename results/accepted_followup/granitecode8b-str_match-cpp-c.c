#include <stdio.h>
#include <string.h>
int main() {
  char s1[] = "hello world";
  char s2[] = "world";
  int result1 = strncmp(s1, s2, strlen(s2));
  int result2 = strcmp(s1 + strlen(s1) - strlen(s2), s2);
  char *loc = strstr(s1, s2);
  if (loc != NULL) {
    printf("String found at location: %ldn", loc - s1);
  }
  int result3 = loc != NULL;
  return 0;
}