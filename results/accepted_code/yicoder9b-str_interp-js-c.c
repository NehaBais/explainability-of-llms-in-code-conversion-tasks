#include <stdio.h>
#include <string.h>

void str_replace(const char *src, const char *find, const char *rep,
                 char *res) {
  char buffer[256];
  while (*src) {
    if (strncmp(src, find, strlen(find)) == 0) {
      strcpy(buffer, rep);
      src += strlen(find);
    } else {
      *res = *src;
      res++;
      src++;
    }
  }
  *res = '\0'; // Null terminate the resultant string
}

int main() {
  const char *original = "Mary had a X lamb";
  char result[1024];
  const char *little = "little";
  const char *find = "X";

  str_replace(original, find, little, result);
  printf("%s\n", result); // prints "Mary had a little lamb."

  return 0;
}