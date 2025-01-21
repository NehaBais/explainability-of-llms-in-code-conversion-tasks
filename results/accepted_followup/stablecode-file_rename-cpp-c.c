#include
#include
#include
#include

int renameFile(char *currentPath, char *fileToRename) {
  char command[200];

  strcpy(command, "mv ");
  strcat(command, currentPath);
  strcat(command, " ");
  strcat(command, fileToRename);
  strcat(command, ".txt output.txt");

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

  if (renameFile(currentPath, fileToRename1)))) {
      printf("Error renaming file.\n");
      return 1;
    }

  if (renameFile(fileToRename1, fileToRename2)))) {
      printf("Error renaming file.\n");
      return 1;
    }

  if (renameFile(currentPath, fileToRename3)))) {
      printf("Error renaming file.\n");
      return 1;
    }

  if (renameFile("/", fileToRename2)))) {
      printf("Error renaming file.\n");
      return 1;
    }

  printf("Files renamed successfully.\n");
  return 0;
}