#include <string.h>

int main() {
  char s[20] = "world!";
  strcpy(s, "Hello, ");
  strcat(s, s);
  return 0;
}