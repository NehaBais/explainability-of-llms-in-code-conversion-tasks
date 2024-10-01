#include <ctype.h>
#include <stdio.h>
#include <string.h>

int areEqual(char *str1, char *str2) { return strcmp(str1, str2) == 0; }

int areNotEqual(char *str1, char *str2) {
  if (areEqual(str1, str2)) {
    return 0; // Strings are equal
  } else {
    return 1; // Strings are not equal
  }
}

int isLexicographicallyBefore(char *str1, char *str2) {
  if (strcmp(str1, str2) < 0)) {
      return 1; // String str1 is lexicographically ordered before string str2
    }
  else {
    return 0; // String str2 is lexicographically ordered before string str1
  }
}

int isLexicographicallyAfter(char *str1, char *str2) {
  if (strcmp(str1, str2) > 0)) {
      return 1; // String str1 is lexicographically ordered after string str2
    }
  else {
    return 0; // String str2 is lexicographically ordered after string str1
  }
}

int main() {
  char str1[5] = "abcd";
  char str2[5] = "dcba";

    printf("Are the strings equal? %d\n", areEqual(str1, str2)));
    printf("Are the strings not equal? %d\n", areNotEqual(str1, str2))));
    printf("Is string '%s' lexicographically ordered before string '%s'? %d\n", str1, str2, isLexicographicallyBefore(str1, str2)))));
    printf("Is string '%s' lexicographically ordered after string '%s'? %d\n", str1, str2, isLexicographicallyAfter(str1, str2))));

    return 0;
}