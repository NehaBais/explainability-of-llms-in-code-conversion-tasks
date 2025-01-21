#include
#include
int main() {
  char s[] = "hello";
  printf("%s", s);

  char s1[strlen(s) + strlen(" world") + 1];
  strcpy(s1, s);
  strcat(s1, " world");
  printf("%s", s1);

  return 0;
}