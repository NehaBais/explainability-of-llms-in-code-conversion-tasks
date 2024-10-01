#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>

bool renameFile(std::string oldname, std::string newname) {
  // Rename file (or directory)
  bool success = ::rename(oldname.c_str(), newname.c_str()) == 0;
  return success;
}

void test(std::string type, std::string oldname, std::string newname) {
  std::cout << "The following " + type + " called " + oldname +
                   (renameFile(oldname, newname)
                        ? " was renamed as "
                        : " could not be renamed into ") +
                   newname + "."
            << std::endl;
}

int main() {
  test("file", "input.txt", "output.txt");
  test("file", "/input.txt", "/output.txt");
  test("directory", "docs", "mydocs");
  test("directory", "/docs/", "/mydocs/");
  return 0;
}