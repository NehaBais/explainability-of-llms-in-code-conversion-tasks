#include <stdio.h>

int main() {
  char result[50]; // The size of the buffer should be enough to hold the output
                   // string

  sprintf(result, "Mary had a %s lamb", "little");
  printf("%s\n", result);

  sprintf(result, "%s had a %s lamb", "little", "Mary");
  printf("%s\n", result);

  sprintf(result, "%s had a %s lamb", "little",
          "Mary"); // Named arguments aren't directly supported
  printf("%s\n", result);

  return 0;
}