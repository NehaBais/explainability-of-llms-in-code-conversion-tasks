#include
#include
int main() {
  char const *s = "0123456789";
  int const n = 3;
  int const m = 4;
  char const c = '2';
  std::string const sub = "456";

 printf("%.*s
", m, s + n);
 printf("%s
", s + n);
 printf("%.*s
", (int)strlen(s) - 1, s);
 printf("%.*s
", m, strstr(s, c));
 printf("%.*s
", m, strstr(s, sub));
 return 0;
}