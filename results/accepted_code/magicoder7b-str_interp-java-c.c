#include <stdio.h>
#include <string.h>

int main() {
  char *adjective = "little";
  char lyric[50]; // assuming enough space for the longest expected output

  sprintf(lyric, "Mary had a %s lamb", adjective);

  printf("%s\n", lyric);

  return 0;
}