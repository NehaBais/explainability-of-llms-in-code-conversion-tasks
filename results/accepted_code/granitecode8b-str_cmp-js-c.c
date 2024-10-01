#include
int main() {
  const char str1[] = "abcd";
  const char str2[] = "dcba";
  int result;

  /* Comparing two strings for exact equality */
  result = strcmp(str1, str2);
  if (result == 0) {
    printf("Truen");
  } else {
    printf("FalseDn");
  }

  /* Comparing two strings for inequality */
  result = strcmp(str1, str2);
  if (result != 0) {
    printf("Truen");
  } else {
    printf("FalseDn");
  }

  /* Comparing two strings to see if one is lexically ordered before than the
   * other */
  result = strcmp(str1, str2);
  if (result < 0) {
    printf("Truen");
  } else {
    printf("FalseDn");
  }

  /* Comparing two strings to see if one is lexically ordered after than the
   * other */
  result = strcmp(str1, str2);
  if (result > 0) {
    printf("Truen");
  } else {
    printf("FalseDn");
  }

  /* Case sensitive comparison */
  result = strcmp(str1, str2);
  if (result == 0) {
    printf("Truen");
  } else {
    printf("FalseDn");
  }

  /* Case insensitive comparison */
  result = strcasecmp(str1, str2);
  if (result == 0) {
    printf("Truen");
  } else {
    printf("FalseDn");
  }

  return 0;
}