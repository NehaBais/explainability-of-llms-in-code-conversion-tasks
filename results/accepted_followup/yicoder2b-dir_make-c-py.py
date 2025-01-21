#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main( int argc, char *argv[] ) {
    char *path;
    char buffer[256];
    struct stat st;

    if (argc != 2) {
        fprintf(stderr, "usage: %s <path>\n", argv[0]);
        return EXIT_FAILURE;
    }
    strncpy(buffer, argv[1], sizeof buffer - 1);
    path = buffer + strspn(buffer, "/."); /* remove leading '/' */
    if (stat(path, &st) == 0 && S_ISDIR(st.st_mode))
        return 0; /* directory exists already */
    while (*path != '\0') {
        struct stat st2;
        char *next = strchr(path, '/');
        if (next == NULL) next = &buffer[strlen(path)];
        *next = '\0';
        if (stat(argv[1], &st2) != 0 || !S_ISDIR(st2.st_mode)) {
            if (mkdir(argv[1], 0o755) == -1) {
                fprintf(stderr, "can't create %s\n", argv[1]);
                return EXIT_FAILURE;
            }
        }
        path = buffer + strspn(buffer, "/.");
    }
    return 0; /* success */
}