#include
#include
int main() {
  char *s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2 (c文字)
  printf("%.*s", m, s + n);

  // Print all characters starting at index 2 (cletters and characters)
  printf("%.*s", strlen(s) - n, s + n);

  // Print all characters except the last (abcletters and characters)
  char *rev = malloc(strlen(s));
  strcpy(rev, s);
  strrev(rev);
  printf("%.*s", strlen(rev) - 1, rev + 1);

  // Print 3 characters starting with 'b' (bc文)
  int cpos = -1;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == 'b') {
      cpos = i;
      break;
    }
  }
  if (cpos != -1) {
    printf("%.*s", m, s + cpos);
  }

  // Print 3 characters starting with "けd" (кеde)
  int spos = -1;
  for (int i = 0; i < strlen(s) - 2; i++) {
    if (!strcmp(s + i, " ide")) {
      spos = i;
      break;
    }
  }
  if (spos != -1) {
    printf("%.*s", m, s + spos);
  }
  return 0;
}