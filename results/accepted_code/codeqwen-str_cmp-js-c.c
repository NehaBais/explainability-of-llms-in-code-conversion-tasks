#include <stdio.h>
#include <string.h>

int main() {
  printf("%d\n",                      // true
         strcmp("abcd", "abcd") == 0, // true
         strcmp("123", "123") == 0,   // true
         strcmp("ABCD", "abcd"),      // true (case insensitive)
         strcmp("abcd", "dcba") < 0,  // true
         strcmp("abcd", "dcba") > 0   // false
  );

  return 0;
}