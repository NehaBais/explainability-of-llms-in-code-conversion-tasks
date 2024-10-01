#include <cstdlib>  // For function "remove"
#include <dirent.h> // For function "opendir"
#include <iostream>

bool renameFile(const char *oldname, const char *newname) {
  return std::rename(oldname, newname) == 0;
}

void test(const char *type, const char *oldname, const char *newname) {
  std::cout << "The following " << type << " called '" << oldname << "' ";
  if (renameFile(oldname, newname)) {
    std::cout << "was renamed as '";
  } else {
    std::cout << "could not be renamed into '";
  }
  std::cout << newname << "'.\n";
}

int main() {
  test("file", "input.txt", "output.txt");
  // If the file is located at root directory, uncomment this line:
  // test("file", "/" "input.txt", "/" "output.txt");
  test("directory", "docs", "mydocs");
  // If the directory is located at root directory, uncomment this line:
  // test("directory", "/" "docs", "/" "mydocs");
  return 0;
}