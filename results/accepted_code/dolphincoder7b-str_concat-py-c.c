#include <stdio.h>
#include <stdlib.h>
int main(void) {
  char *s1 = "hello";
  printf("%s world\n", s1);

  char *s2;
  asprintf(&s2, "%s world", s1);
  printf("%s\n", s2);

  char *s3 = ",  ".join([ s1, "world", "mom" ]);
  printf("%s\n", s3);

  char *s4 = ",  ".join([ s1, "world", "mom" ]);
  printf("%s\n", s4);

  return 0;
}