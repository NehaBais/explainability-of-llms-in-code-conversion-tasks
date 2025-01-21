#include <string.h>
int main() {
  char s[] = "Hello";
  strcat(s, ", World");
  printf("%s", s);
  return 0;
}