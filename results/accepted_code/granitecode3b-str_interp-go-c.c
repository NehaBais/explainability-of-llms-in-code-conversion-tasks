#include
int main() {
  char str[] = "Mary had a %s lamb";
  char txt[] = "little";
  char out[100];

  sprintf(out, str, txt);
  printf("%s", out);

  return 0;
}