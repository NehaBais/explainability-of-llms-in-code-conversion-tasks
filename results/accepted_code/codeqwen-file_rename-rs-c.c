#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void move_directory(char *src, char *dest) {
  DIR *dir;
  struct dirent *ent;

  if ((dir = opendir(src)) != NULL) {
    while ((ent = readdir(dir)) != NULL) {
      if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0)
        continue;

      char new_src[FILENAME_MAX], new_dest[FILENAME_MAX];
      sprintf(new_src, "%s/%s", src, ent->d_name);
      sprintf(new_dest, "%s/%s", dest, ent->d_name);

      if (rename(new_src, new_dest) < 0) {
        perror("Error while moving files");
      }
    }
    closedir(dir);
  } else {
    perror("Error opening directory");
  }
}

int main() {
  move_directory("docs", "mydocs");
  move_directory("/docs", "/mydocs");

  return 0;
}