#include <stdio.h>
#include <string.h>

int renameFile(char *currentPath, char *fileToRename) {
  char command[200];

  // Construct the rename command
  strcpy(command, "mv ");
  strcat(command, currentPath);
  strcat(command, " ");
  strcat(command, fileToRename);
  strcat(command, ".txt output.txt");

  // Execute the rename command
  if (system(command)) {
    printf("Error renaming file.\n");
    return 1;
  }

  return 0;
}

int main() {
  char currentPath[] = "here";
  char fileToRename1[] = "input.txt";
  char fileToRename2[] = "docs";
  char fileToRename3[] = "mydocs";

  // Rename the first directory and file
  if (renameFile(currentPath, fileToRename1)))) {
      printf("Error renaming file.\n");
      return 1;
    }

  // Rename the second directory and file
  if (renameFile(fileToRename1, fileToRename2)))) {
      printf("Error renaming file.\n");
      return 1;
    }

  // Rename the third directory and file
  if (renameFile(currentPath, fileToRename3)))) {
      printf("Error renaming file.\n");
      return 1;
    }

  // Rename the fourth directory and file
  if (renameFile("/", fileToRename2)))) {
      printf("Error renaming file.\n");
      return 1;
    }

  printf("Files renamed successfully.\n");
  return 0;
}