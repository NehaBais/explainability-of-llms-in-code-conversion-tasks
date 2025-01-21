#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int renameFile(char *oldname, char *newname) {
  struct stat st;

  if (stat(oldname, &st) != 0) {
    return 0;
  }

  if (rename(oldname, newname) != 0) {
    return 0;
  }

  return 1;
}

void test(char *type, char *oldname, char *newname) {
  printf("The following %s called %s\n", type, oldname);
  if (renameFile(oldname, newname))) {
    printf("%s was renamed as %s.\n", oldname, newname);
  }
  else {
    printf("%s could not be renamed into 
%s.\n", oldname, newname);
  }
}

int main() {
  char *dir = "."; // current working directory

  // file rename test for the current working directory
  test("file", "input.txt", "output.txt");

  // change to the filesystem root
  chdir("/");

  // file rename test for the filesystem root
  test("file", "/input.txt", "/output.txt");

  // directory rename test for the current working directory
  test("directory", "docs", "mydocs");

  // change back to the original working directory (current directory at the
  // start of the program))
  chdir("."));

  return 0;
}