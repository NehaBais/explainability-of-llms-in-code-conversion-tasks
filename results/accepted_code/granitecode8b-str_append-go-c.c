#include
#include
int main() {
  char *str = "foo";
  char *append_str = "bar";
  strcat(str, append_str);
  printf("%s", str);
  return 0;
}