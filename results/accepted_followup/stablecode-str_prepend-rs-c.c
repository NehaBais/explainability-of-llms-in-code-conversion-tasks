#include
#include
int main() {
  char s[100];

  strcpy(s, "World");
  strcat(s, "Hello ");
  printf("%s\n", s);

  return 0;
}