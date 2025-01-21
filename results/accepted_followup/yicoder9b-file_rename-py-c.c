#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // include string header file to use strcmp() function
#include <unistd.h> // include unistd header file to use getcwd() and chdir() functions

int main() {
  if (rename("input.txt", "output.txt") == 0) {
    printf("File renamed successfully\n");
  } else {
    printf("Failed to rename file\n");
  }

  // For directories:
  DIR *dir = opendir("./"); // open current directory
  struct dirent *entry;
  while ((entry = readdir(dir)) != NULL) {
    if (strcmp(entry->d_name, "docs") == 0) {
      rename("docs", "mydocs"); // rename the directory
    }
  }
  closedir(dir);

  char cwd[1024];
  getcwd(cwd, sizeof(cwd)); // get current working directory path
  chdir("/");               // change directory to root

  if (rename(cwd, "input.txt") == 0) {
    printf("File renamed successfully\n");
  } else {
    printf("Failed to rename file in the root directory\n");
  }

  dir = opendir("/"); // open root directory
  while ((entry = readdir(dir)) != NULL) {
    if (strcmp(entry->d_name, "docs") == 0) {
      rename(cwd, "mydocs"); // rename the directory in root
    }
  }
  closedir(dir);
  chdir(cwd); // change back to original working directory

  return 0;
}