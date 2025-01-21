#include
int main() {
  char s[] = "12345678";
  char *prepend_string = "0";
  strcat(prepend_string, s);
  printf("%s", prepend_string);
  return 0;
}