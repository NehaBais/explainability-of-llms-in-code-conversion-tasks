#include
int main() {
  char s[] = "hello";
  char t[strlen(s) + 6]; // Add 6 to account for the additional characters
                         // needed for the string literal.
  strcpy(t, s);
  strcat(t, " there!");
  printf("%s", t);
  return 0;
}