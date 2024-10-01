#include
#include
int main() {
  char *s = "ABCDEFGH";
  int n = 2;
  int m = 3;
  // for reference
  printf("Index: ");
  for (int i = 0; i < strlen(s); i++) {
    printf("%d", i);
  }
  printf("nString: %sn", s);
  // starting from n characters in and of m length
  printf("Start %d, length %d: ", n, m);
  for (int i = n; i < n + m; i++) {
    printf("%c", s[i]);
  }
  printf("n");
  // starting from n characters in, up to the end of the string
  printf("Start %d, to end: ", n);
  for (int i = n; i < strlen(s); i++) {
    printf("%c", s[i]);
  }
  printf("n");
  // whole string minus last character
  printf("All but last: ");
  for (int i = 0; i < strlen(s) - 1; i++) {
    printf("%c", s[i]);
  }
  printf("n");
  // starting from a known character within the string and of m length
  int dx = -1;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == 'D') {
      dx = i;
      break;
    }
  }
  printf("Start 'D', length %d: ", m);
  for (int i = dx; i < dx + m; i++) {
    printf("%c", s[i]);
  }
  printf("n");
  // starting from a known substring within the string and of m length
  int sx = -1;
  for (int i = 0; i < strlen(s) - m + 1; i++) {
    if (strncmp(&s[i], "DE", m) == 0) {
      sx = i;
      break;
    }
  }
  printf("Start \"DE\", length %d: ", m);
  for (int i = sx; i < sx + m; i++) {
    printf("%c", s[i]);
  }
  printf("n");
  return 0;
}