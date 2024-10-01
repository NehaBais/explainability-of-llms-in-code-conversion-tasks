#include <iostream>
#include <string.h>

int main() {
  char *str1 = "prepended to";
  char *str2 = "my string";

  char *prepended = strcat(str1, str2);

  std::cout << prepended << std::endl;

  return 0;
}