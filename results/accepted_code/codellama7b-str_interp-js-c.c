#include <stdio.h>
#include <string.h>

int main() {
  char *original = "Mary had a X lamb";
  char *little = "little";
  char *replaced = strdup(original);

  // replace the value of X with the value of little
  replaced = str_replace(replaced, "X", little);

  printf("%s\n", replaced); // prints Mary had a little lamb

  return 0;
}