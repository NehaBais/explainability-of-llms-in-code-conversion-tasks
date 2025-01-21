#include
#include
int main() {
  char s[12];
  strcpy(s, "World");
  strcat(s, ", Hello ");
  printf("%s", s);
  return 0;
}