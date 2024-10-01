#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abcd";
  char str2[] = "ab";
  char str3[] = "zn";
  char str4[] = "bb";
  char str5[] = "ab";

  printf("%d\n", startsWith(str1, str2)); // prints 1 (true)
  printf("%d\n", endsWith(str1, str3));   // prints 0 (false)
  printf("%d\n", contains(str4, str5));   // prints 0 (false)

  int loc = indexOf("abab", "bb");
  printf("%d\n", loc); // prints -1
  loc = indexOf("abab", "ab");
  printf("%d\n", loc); // prints 0

  return 0;
}

int startsWith(char *str, char *substr) {
  int lenStr = strlen(str);
  int lenSubstr = strlen(substr);

  if (lenStr < lenSubstr)
    return 0;

  for (int i = 0; i < lenSubstr; i++)
    if (str[i] != substr[i])
      return 0;

  return 1;
}

int endsWith(char *str, char *substr) {
  int lenStr = strlen(str);
  int lenSubstr = strlen(substr);

  if (lenStr < lenSubstr)
    return 0;

  for (int i = 0; i < lenSubstr; i++)
    if (str[lenStr - lenSubstr + i] != substr[i])
      return 0;

  return 1;
}

int contains(char *str, char *substr) {
  int lenStr = strlen(str);
  int lenSubstr = strlen(substr);

  for (int i = 0; i <= lenStr - lenSubstr; i++) {
    int j;
    for (j = 0; j < lenSubstr; j++)
      if (str[i + j] != substr[j])
        break;

    if (j == lenSubstr)
      return 1;
  }

  return 0;
}

int indexOf(char *str, char *substr) {
  int lenStr = strlen(str);
  int lenSubstr = strlen(substr);

  for (int i = 0; i <= lenStr - lenSubstr; i++) {
    int j;
    for (j = 0; j < lenSubstr; j++)
      if (str[i + j] != substr[j])
        break;

    if (j == lenSubstr)
      return i;
  }

  return -1;
}