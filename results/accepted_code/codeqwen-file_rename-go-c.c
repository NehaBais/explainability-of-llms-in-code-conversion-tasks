#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main() {
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming input.txt");
    return 1;
  }

  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming docs");
    return 1;
  }

  char root_path[PATH_MAX] = "/";
  strcat(root_path, "input.txt");
  if (rename(root_path, strcat(root_path, "output.txt")) != 0) {
    perror("Error renaming /input.txt");
    return 1;
  }

  char root_docs[PATH_MAX] = "/";
  strcat(root_docs, "docs");
  if (rename(root_docs, strcat(root_docs, "mydocs")) != 0) {
    perror("Error renaming /docs");
    return 1;
  }

  return 0;
}