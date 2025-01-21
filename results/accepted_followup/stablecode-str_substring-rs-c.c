// Corrected code
int main() {
  char s[] = "abc文字化けdef";
  int n = 2;
  int m = 3;

  printf("%.*s\n", m, strchrnuc(s, n)));
  printf("%s\n", strchrnuc(s, n)));
  char* substr = malloc(strlen(s) - 1));
  for (int i = 0; i < strlen(s) - 1; i++) {
    substr[i] = s[i];
  }
  printf("%s\n", substr));

  char *bpos = strchrnuc(s, n);
  for (int i = 0; i < strlen(s) - 1; i++) {
    if (s[i] == *bpos)) {
      printf("%.*s\n", m, &s[i]));
      break;
      }
  }

  char *kpos = strchrnuc(s, n);
  for (int i = 0; i < strlen(s) - 1; i++) {
    if (s[i] == *kpos)) {
      printf("%.*s\n", m, &s[i]));
      break;
      }
  }

  return 0;
}