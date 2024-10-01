#include
#include
using namespace std;
int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Beginning
  int result1 = strncmp(s1, s3, strlen(s3)) == 0;

  // End
  int result2 = strcmp(s1 + strlen(s1) - strlen(s3), s3) == 0;

  // Anywhere
  char *loc = strstr(s1, s2);
  if (loc != NULL) {
    printf("String found at location: %ldn", loc - s1);
  } else {
    printf("String not found.n");
  }
  int result3 = loc != NULL;

  // Location of match for part 2
  int loc = strstr(s2, s3) - s2;
  if (loc >= 0) {
    printf("Location of match: %dn", loc);
  } else {
    printf("Match not found.n");
  }

  return 0;
}