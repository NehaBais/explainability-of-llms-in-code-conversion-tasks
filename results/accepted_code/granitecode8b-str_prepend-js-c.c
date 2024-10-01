#include
int main() {
  char *s = ", World";
  char *result = "Hello";
  strcat(result, s);
  printf("%s", result);
  return 0;
}