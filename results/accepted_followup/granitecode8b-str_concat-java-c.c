#include
int main() {
  char s[] = "hello";
  printf("%s literaln", s);
  char s2[50];
  sprintf(s2, "%s literal", s);
  printf("%sn", s2);
  return 0;
}