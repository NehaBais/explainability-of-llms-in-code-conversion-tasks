#include <stdio.h>
#include <string.h>

int main() {
  char s[100] = "foo"; // string variable with an initial value of 'foo'
  strcat(s, "bar");    // appending the string 'bar' to our original string
  printf("%s", s);     // printing out the resulting string
  return 0;
}