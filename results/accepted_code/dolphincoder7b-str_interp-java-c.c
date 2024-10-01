#include <stdio.h>
#include <stdlib.h>
int main(void) {
  char *adjective = "little";
  char lyric[50] = "";

  sprintf(lyric, "Mary had a %s lamb", adjective);
  printf("%s\n", lyric);

  return 0;
}