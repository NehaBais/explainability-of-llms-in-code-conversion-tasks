#include <stdio.h>

int main() {
  char *adjective = "little";
  char lyric[50];
  sprintf(lyric, "Mary had a %s lamb", adjective);

  printf("%s\n", lyric);

  return 0;
}