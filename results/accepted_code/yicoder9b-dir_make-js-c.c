#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int mkdirp(const char *path) {
  struct stat st;
  char *saveptr = NULL, *dir = strdup(path);
  const mode_t mask = 0755;
  mode_t prev_umask;

  /* Return if the directory already exists. */
  if (stat(path, &st) == 0) {
    return 0;
  }

  char *token = strtok_r(dir, "/", &saveptr);
  prev_umask = umask(mask);

  do {
    /* Create directory */
    if (mkdir(token, mask) == -1 && errno != EEXIST) {
      umask(prev_umask);
      free(dir);
      return -1;
    }

    /* Go to next subdirectory */
    token = strtok_r(NULL, "/", &saveptr);
  } while (token != NULL);

  umask(prev_umask);
  free(dir);

  return 0;
}