#include <stdio.h>
#include <stdlib.h>

int main() {
  char *s1 = (char *)malloc(10);
  strcpy(s1, "hello");

  char *s2 = (char *)malloc(15);
  strcpy(s2, s1);
  strcat(s2, " world");
  printf("%s\n", s2);

  free(s1);
  free(s2);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
  char *s1 = (char *)malloc(10);
  strcpy(s1, "hello");

  char *s2 = (char *)malloc(40); // max size of output
  sprintf(s2, "%s, %s, %s", s1, "world", "mom");
  printf("%s\n", s2);

  free(s1);
  free(s2);

  return 0;
}