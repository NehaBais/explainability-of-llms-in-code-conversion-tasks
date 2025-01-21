#include
int main() {
  char s[] = "hello";
  printf("%s", s);
  printf(" %s", s);
  char s2[strlen(s) + 6];
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("n%s", s2);
  return 0;
}