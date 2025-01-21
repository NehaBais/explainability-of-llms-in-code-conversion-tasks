#include
#include
#include

int main() {
  char s[] = "hello";
  printf("%s literal", s);
  char s2[strlen(s) + 6];
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("%s", s2);
  return 0;
}