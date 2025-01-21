#include <stdio.h>
#include <stdlib.h>

int main() {
  char *adjective = "little";
  char *lyric = (char *)malloc(strlen("Mary had a ") + strlen(adjective) + 1);

  if (lyric == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return EXIT_FAILURE;
  }

  snprintf(lyric, strlen("Mary had a ") + strlen(adjective) + 1,
           "Mary had a %s lamb", adjective);

  printf("%s\n", lyric);

  free(lyric);

  return EXIT_SUCCESS;
}