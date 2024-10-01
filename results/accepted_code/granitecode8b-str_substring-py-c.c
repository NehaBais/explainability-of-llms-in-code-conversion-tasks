#include
int main() {
  char *s = "abcdefgh";
  int n = 2, m = 3;
  char *char = "d";
  char *chars = "cd";

  // starting from n=2 characters in and m=3 in length;
  printf("%s", &s[n - 1]);
  for (int i = 0; i < m - 1; i++) {
    printf("%c", s[n + i]);
  }
  printf("n");

  // starting from n characters in, up to the end of the string;
  printf("%sn", &s[n - 1]);

  // whole string minus last character;
  for (int i = 0; i < strlen(s) - 1; i++) {
    printf("%c", s[i]);
  }
  printf("n");

  // starting from a known character char="d" within the string and of m length;
  int indx = 0;
  while (strcmp(&s[indx], char) != 0 && indx < strlen(s)) {
    indx++;
  }
  if (indx < strlen(s)) {
    printf("%sn", &s[indx]);
    for (int i = 0; i < m - 1; i++) {
      printf("%c", s[indx + i]);
    }
    printf("n");
  }

  // starting from a known substring chars="cd" within the string and of m
  // length.
  indx = 0;
  while (strncmp(&s[indx], chars, strlen(chars)) != 0 && indx < strlen(s)) {
    indx++;
  }
  if (indx + strlen(chars) <= strlen(s)) {
    printf("%sn", &s[indx]);
    for (int i = 0; i < m - 1; i++) {
      printf("%c", s[indx + i]);
    }
    printf("n");
  }

  return 0;
}