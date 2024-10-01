#include
#include
int main() {
  const char *str1 = "abcd";
  const char *str2 = "ab";

  int res1 = strstartswith(str1, str2);  // returns 1 (true)
  int res2 = strrchr(str1, 'b') != NULL; // returns 0 (false)
  int res3 = strstr(str1, "ab") != NULL; // returns 1 (true)

  printf("startsWith: %d, contains: %d, endsWith: %d", res1, res2, res3);
  return 0;
}