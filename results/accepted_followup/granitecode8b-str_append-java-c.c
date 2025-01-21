#include
#include
int main() {
  char str[100];
  strcpy(str, "abc");
  printf("%s", str);
  strcat(str, "def");
  printf("%s", str);
  return 0;
}