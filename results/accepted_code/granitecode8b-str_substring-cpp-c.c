#include
#include
int main() {
  char s[] = "0123456789";
  int n = 3;
  int m = 4;
  char c = '2';
  char sub[] = "456";
 printf("%.*s
", m, s+n);
 printf("%s
", s+n);
 printf("%.*s
", (int)strlen(s)-1, s);
 printf("%.*s
", m, strchr(s, c)+n);
 printf("%.*s
", m, strstr(s, sub)+n);
 return 0;
}