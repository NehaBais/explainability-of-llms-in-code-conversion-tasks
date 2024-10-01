#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "def"; // equivalent to String string = "def";
  char str2[] = "abc"; // create another string literal which we will prepend to
                       // the original string

  strcat(str2, str1); // concatenate (prepend) str1 before str2 in C

  printf("Final String after prepending: %s\n", str2); // prints "abcdef"
  return 0;
}