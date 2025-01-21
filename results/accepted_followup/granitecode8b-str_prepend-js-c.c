#include
int main() {
  char *result = "Hello";
  char *s = ", World";
  strcat(result, s);
  printf("%s", result);
  return 0;
}