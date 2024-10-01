#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>

int mkdir_p(const char *path) {
  int status = 0;
  struct stat sb;

  if (stat(path, &sb) == 0 && S_ISDIR(sb.st_mode)) {
    return 0;
  }

  char *dir = strdup(path);
  char *saveptr;
  char *token = strtok_r(dir, "/", &saveptr);

  while (token != NULL) {
    if (mkdir(token, 0755) == -1 && errno != EEXIST) {
      status = -1;
      break;
    }
    token = strtok_r(NULL, "/", &saveptr);
  }

  free(dir);

  return status;
}

int main() {
  int status = mkdir_p("./path/to/dir");

  if (status == 0) {
    printf("Directory created successfully.\n");
  } else {
    printf("Error creating directory.\n");
  }

  return 0;
}