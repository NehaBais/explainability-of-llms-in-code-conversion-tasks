#include <dirent.h>
#include <stdio.h>

int main() {
  DIR *dir;
  struct dirent *ent;

  /* Read directory entries */
  dir = opendir("./docs");
  if (dir != NULL) {
    while ((ent = readdir(dir)) != NULL) {
      // Process each entry here...
    }
    closedir(dir);
  } else {
    printf("Failed to open input.txt directory\n");
    return -1;
  }

  /* Read files in the filesystem root */
  dir = opendir("/docs/");
  if (dir != NULL) {
    while ((ent = readdir(dir)) != NULL) {
      // Process each entry here...
    }
    closedir(dir);
  } else {
    printf("Failed to open /docs/ directory\n");
    return -1;
  }

  return 0;
}