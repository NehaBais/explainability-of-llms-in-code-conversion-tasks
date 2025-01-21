#include
char s[] = "world!";
int main() {
  char *s2;
  unsigned long s2_len = strlen("Hello, ") + strlen(s);
  s2 = (char *)malloc(sizeof(char) * (s2_len + 1));
  sprintf(s2, "Hello, %s", s);
  printf("%s", s2);
  free(s2);
  return 0;
}