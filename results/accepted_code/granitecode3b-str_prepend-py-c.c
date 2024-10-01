#include
int main() {
  char s[] = "12345678";
  char t[strlen(s) + 1]; // +1 for the null terminator

  strcat(t, "0");
  strcat(t, s);
  printf("%s", t);
  return 0;
}