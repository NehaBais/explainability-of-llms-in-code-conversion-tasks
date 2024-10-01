#include stdio.h
int main() {
  char s[] = "World";
  char new_s[strlen("Hello ") + strlen(s)];
  strcpy(new_s, "Hello ");
  strcat(new_s, s);
  printf("%sn", new_s);
  return 0;
}