#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to rename a file or directory
int rename_file(const char *oldname, const char *newname) {
  if (rename(oldname, newname) != 0) {
    perror("Error renaming file");
    return -1;
  }
  return 0;
}

// Function to test the rename operation for both local and root directory
// scenarios
void test(const char *type, const char *oldname, const char *newname) {
  printf("The following %s called %s", type, oldname);
  if (rename_file(oldname, newname) == 0) {
    printf(" was renamed as %s.\n", newname);
  } else {
    printf(" could not be renamed into %s.\n", newname);
  }
}

int main() {
  // Test for file renaming in current directory and root directory
  test("file", "input.txt", "output.txt");
  char root_oldname[] = "/input.txt";
  char root_newname[] = "/output.txt";
  strcpy(root_oldname, "/"); // Adjusting the path for the root directory
  strcat(root_oldname, "input.txt");
  strcpy(root_newname, "/"); // Adjusting the path for the root directory
  strcat(root_newname, "output.txt");
  test("file", root_oldname, root_newname);

  // Test for directory renaming in current directory and root directory
  test("directory", "docs", "mydocs");
  char dir_root_oldname[] = "/docs";
  char dir_root_newname[] = "/mydocs";
  strcpy(dir_root_oldname, "/"); // Adjusting the path for the root directory
  strcat(dir_root_oldname, "docs");
  strcpy(dir_root_newname, "/"); // Adjusting the path for the root directory
  strcat(dir_root_newname, "mydocs");
  test("directory", dir_root_oldname, dir_root_newname);

  return 0;
}