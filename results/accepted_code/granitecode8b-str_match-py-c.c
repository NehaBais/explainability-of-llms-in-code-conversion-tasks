#include
int main() {
  const char *str1 = "abcd";
  const char *str2 = "ab";

  // Determining if the first string starts with second string
  int result1 = (strstartswith(str1, str2) == 0);
  printf("Determining if the first string starts with second string: %d",
         result1);
  printf("n");

  // Determining if the first string contains the second string at any location
  int result2 = (strstr(str1, str2) != NULL);
  printf("Determining if the first string contains the second string at any "
         "location: %d",
         result2);
  printf("n");

  // Determinating if the first string ends with the second string
  int result3 = (strendswith(str1, str2) == 0);
  printf("Determining if the first string ends with the second string: %dn",
         result3);

  return 0;
}