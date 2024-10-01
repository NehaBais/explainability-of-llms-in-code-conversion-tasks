#include
int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Determining if the first string starts with second string
  assert(strstr(s1, s3));
  // Determining if the first string contains the second string at any location
  printf("%d", strstr(s1, s3) != NULL);
  // Print the location of the match
  printf("Found match at pos %zu", strstr(s1, s3) - s1);
  // Determining if the first string ends with the second string
  assert(strcmp(strrchr(s2, 'b'), "ab"));

  return 0;
}