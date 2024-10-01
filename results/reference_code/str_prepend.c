#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[100] = "my String";
  char *cstr = "Changed ";
  char *dup;
  sprintf(str, "%s%s", cstr, (dup = strdup(str)));
  free(dup);
  printf("%s\n", str);
  return 0;
}