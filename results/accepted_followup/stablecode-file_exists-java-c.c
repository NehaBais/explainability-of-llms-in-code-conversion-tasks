#include
#include
#include
#include

int checkFile(char *path) {
  struct stat st;
  if (stat(path, &st) == 0) {
    return 1;
  }
  return 0;
}

int main() {
  // for the current working directory
  char path1[10224];
  strcpy(path1, "docs/input.txt");
  if (checkFile(path1))) {
        printf("The file %s exists.\n", path1);
    }
  else {
    printf("The file %s does not exist.\n", path1);
  }

  // for a file and directory in the filesystem root
  char path2[10224];
  strcpy(path2, "/docs/input.txt");
  if (checkFile(path2))) {
        printf("The file %s exists.\n", path2);
    }
  else {
        printf("The file %s does not exist.\n", path2));
  }

  return 0;
}