#include <stdio.h>

int main() {
  char *adjective = "little";
    char* lyric = malloc(100 * sizeof(char)));
    snprintf(lyric, 100, "Mary had a %s lamb", adjective);

    printf("%s\n", lyric);

    free(lyric);

    return 0;
}