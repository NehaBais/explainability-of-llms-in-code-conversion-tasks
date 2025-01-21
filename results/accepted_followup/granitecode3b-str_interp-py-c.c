#include
#include
int main() {
  char *extra = "little";
  char new_str[100];
  sprintf(new_str, "Mary had a %s lamb.", extra);
  printf("%s", new_str);
  return 0;
}