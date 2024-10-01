#include
#include
int main() {
  char path1[PATH_MAX];
  char path2[PATH_MAX];
  char *home = NULL;

  /* Get the current working directory */
  if (getcwd(path1, sizeof(path1)) == NULL) {
    return EXIT_FAILURE;
  }

  /* Get the home directory */
  home = getenv("HOME");
  if (home == NULL) {
    printf("Error getting home directory");
    return EXIT_FAILURE;
  }

  /* Rename input.txt to output.txt in the current working directory */
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming file");
    return EXIT_FAILURE;
  }

  /* Rename docs to mydocs in the home directory */
  if (chdir(home) == -1) {
    perror("Error changing directory");
    return EXIT_FAILURE;
  }
  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming directory");
    return EXIT_FAILURE;
  }

  /* Rename input.txt to output.txt in the filesystem root */
  if (chdir("/") == -1) {
    perror("Error changing directory");
    return EXIT_FAILURE;
  }
  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Error renaming file");
    return EXIT_FAILURE;
  }

  /* Rename docs to mydocs in the filesystem root */
  if (rename("/docs", "/mydocs") != 0) {
    perror("Error renaming directory");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}