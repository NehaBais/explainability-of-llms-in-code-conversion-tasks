#include <stdio.h>
#include <string.h>
#include <unistd.h>

bool renameFile(const char *oldname, const char *newname) {
  return rename(oldname, newname) == 0;
}

void test(const char *type, const char *oldname, const char *newname) {
  printf("The following %s called %s ", type, oldname);
  printf("%s renamed as %s\n",
         renameFile(oldname, newname) ? "was" : "could not be", newname);
}

int main() {
  test("file", "input.txt", "output.txt");
  test("file", "/" + string("input.txt"), "/" + string("output.txt"));
  test("directory", "docs", "mydocs");
  test("directory", "/" + string("docs/") + "/", "/" + string("mydocs/") + "/");
  return 0;
}