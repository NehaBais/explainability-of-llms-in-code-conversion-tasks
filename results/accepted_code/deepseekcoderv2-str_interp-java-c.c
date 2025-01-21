#include <stdio.h>
#include <string.h>

int main() {
  char adjective[] = "little";
  char lyric[100]; // Assuming the maximum length of the resulting string will
                   // not exceed 100 characters

  // Use sprintf to format the string with the adjective
  sprintf(lyric, "Mary had a %s lamb", adjective);

  printf("%s\n", lyric);

  return 0;
}