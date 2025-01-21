#include
int main() {
  char *s = "hello";
  printf("%s", s);

  char s1[20];
  sprintf(s1, "%s world", s);
  printf("%s", s1);

  return 0;
}