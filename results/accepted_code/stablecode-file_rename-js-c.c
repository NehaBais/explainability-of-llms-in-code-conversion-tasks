#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void renameFile(char *currentPath, char *newName) {
  char command[200];
  sprintf(command, "mv %s %s", currentPath, newName);
  system(command);
}

void moveFolder(char *currentPath, char *newPath) {
  char command[200];
  sprintf(command, "mv %s %s", currentPath, newPath);
  system(command);
}

int main() {
  renameFile("input.txt", "output.txt");
  moveFolder("docs", "mydocs");

  return 0;
}