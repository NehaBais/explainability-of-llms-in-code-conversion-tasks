#include
#include
int main() {
  char str1[] = "abcd";
  char str2[] = "ab";
  int loc;

  // Determining if the first string starts with second string
  printf("%d", !strcmp(str1, str2));

  // Determining if the first string contains the second string at any location
  printf(", %d", strstr(str1, str2) != NULL);

  // Determining if the first string ends with the second string
  printf(", %d", !strcmp(str1 + strlen(str1) - strlen(str2), str2));

  printf("n");

  // Print the location of the match for part 2
  loc = strstr(str1, str2);
  while (loc != NULL) {
    printf("%d", loc - str1);
    loc = strstr(loc + 1, str2);
  }

  return 0;
}