#include <ctype.h> // needed for tolower() function
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abcd";
  char str2[] = "abcd";
  char numStr1[] = "123";
  char str3[] = "ABCD";
  char str4[] = "dcba";

  printf("%d\n", strcmp(str1, str2) == 0); // true (exact equality)
  printf("%d\n",
         strcasecmp(str3, str1) == 0); // true (case insensitive equality)
  printf("%d\n",
         strcmp(str1, str4) < 0); // true (str1 comes before str4 lexically)
  printf("%d\n", strcmp(str1, str2) >
                     0); // false (str1 does not come after str2 lexically)
  printf("%d\n", strcmp(str1, numStr1) ==
                     0); // false (numeric string comparison treated lexically)

  return 0;
}