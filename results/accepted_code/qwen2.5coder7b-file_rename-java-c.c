#include <stdio.h>
#include <stdlib.h>

// Function to rename a file or directory
int rename_file_or_dir(const char *oldname, const char *newname) {
  if (rename(oldname, newname) == 0) {
    return 1; // Success
  } else {
    perror("Error renaming");
    return 0; // Failure
  }
}

// Function to test the rename operation
void test(const char *type, const char *oldname, const char *newname) {
  printf("The following %s called %s ", type, oldname);
  if (rename_file_or_dir(oldname, newname)) {
    printf("was renamed as ");
  } else {
    printf("could not be renamed into ");
  }
  printf("%s.\n", newname);
}

int main() {
  // Test in the current working directory
  test("file", "input.txt", "output.txt");
  test("directory", "docs", "mydocs");

  // Test in the filesystem root (assuming the program is run with appropriate
  // permissions)
  test("file", "/input.txt", "/output.txt");
  test("directory", "/docs/", "/mydocs/");

  return 0;
}