#include <stdio.h>
#define MAX_SIZE 100 // Define maximum size of string

int main() {
  char adjective[MAX_SIZE] = "little";
  char lyric[MAX_SIZE];

  sprintf(lyric, "Mary had a %s lamb", adjective);
  printf("%s\n", lyric); // Output: Mary had a little lamb

  return 0;
}