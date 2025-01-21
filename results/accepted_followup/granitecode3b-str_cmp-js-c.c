#include
int main(int argc, char *argv[]) {
  const char *str1 = "abcd";
  const char *str2 = "abcd";
  int result1;
  int result2;
  int result3;
  int result4;
  int result5;
  int result6;

  // Exact equality comparison
  result1 = (strcmp(str1, str2) == 0);
  printf("Result 1: %dn", result1);

  // Inexact equality comparison (inverse of exact equality)
  result2 = (strcmp(str1, str2) != 0);
  printf("Result 2: %dnn", result2);

  // Lexical ordering before
  result3 = (strcmp(str1, "dcba") < 0);
  printf("Result 3: %dn", result3);

  // Lexical ordering after
  result4 = (strcmp(str1, "dcba") > 0);
  printf("Result 4: %dn", result4);

  // Case insensitive comparison
  result5 = (strcmp(str1, "DCBA") == 0);
  printf("Result 5: %dn", result5);

  // Lexical ordering before and after
  result6 = (strcmp(str1, "dcba") < 0 && strcmp(str2, "dcba") > 0);
  printf("Result 6: %dn", result6);

  return 0;
}