#include <stdio.h>
#include <stdlib.h>

int renameFile(const char *oldname, const char *newname) {
  if (rename(oldname, newname) == 0)
    return 1;
  else
    return 0;
}

void test(const char *type, const char *oldname, const char *newname) {
  printf("The following %s called %s %s renamed as %s.\n", type, oldname,
         (renameFile(oldname, newname) ? "was" : "could not be"), newname);
}

int main() {
  test("file", "input.txt", "output.txt");
  test("file", "/input.txt", "/output.txt");
  test("directory", "docs/", "mydocs/");
  test("directory", "/docs/", "/mydocs/");

  return 0;
}