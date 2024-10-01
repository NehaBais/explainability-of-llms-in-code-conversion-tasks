#include
#include
int main() {
  char s[] = "hello";
  printf("%s literaln", s);
  char s2[strlen(s) + 9];
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("%sn", s2);
  return 0;
}