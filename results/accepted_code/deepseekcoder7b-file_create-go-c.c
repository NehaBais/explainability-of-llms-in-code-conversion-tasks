#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>

void createFile(char *fn) {
  FILE *file = fopen(fn, "w");

  if (file == NULL) {
    printf("Failed to open the file\n");
    return;
  }

  printf("File '%s' created!\n", fn);
  fclose(file);
}

void createDir(char *dn) {
  if (mkdir(dn, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1) {
    printf("Failed to create the directory\n");
    return;
  }

  printf("Directory '%s' created!\n", dn);
}

int main() {
  createFile("output.txt");
  createDir("docs");
  // if you want to make it in filesystem root directory, just add / before file
  // and directory name. For example "/output.txt" and "/docs". But be careful
  // as root directory(/) is usually read only for security reason.
}