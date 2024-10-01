#include <stdio.h>
#include <unistd.h>

int renameFile(const char *oldName, const char *newName) {
  return rename(oldName, newName);
}

void test(const char *type, const char *oldName, const char *newName) {
  if (renameFile(oldName, newName)) {
    printf("The following %s called %s was renamed as %s.\n", type, oldName,
           newName);
  } else {
    printf("The following %s called %s could not be renamed into %s.\n", type,
           oldName, newName);
  }
}

int main() {
  test("file", "input.txt", "output.txt");
  test("file", "/input.txt", "/output.txt");
  test("directory", "docs", "mydocs");
  test("directory", "/docs/", "/mydocs/");

  return 0;
}