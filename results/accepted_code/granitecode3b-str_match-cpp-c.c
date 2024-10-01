#include
int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Beginning
  printf("%d", strncmp(s1, s3, strlen(s3)) == 0);

  // End
  printf("n");
  printf("%d", strcmp(s1 + (strlen(s1) - strlen(s3)), s3) == 0);

  // Anywhere
  printf("n");
  printf("%d", strstr(s2, s3) != NULL);
  return 0;
}