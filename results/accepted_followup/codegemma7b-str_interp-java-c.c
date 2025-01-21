#include <stdlib.h>
#include <string.h>

char *adjective = "little";
char *lyric =
    malloc(strlen("Mary had a ") + strlen(adjective) + strlen(" lamb") + 1);
sprintf(lyric, "Mary had a %s lamb", adjective);