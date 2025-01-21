#include <filesystem>
#include <iostream>
#include <string>

namespace fs = std::filesystem;

bool renameFile(const std::string &oldname, const std::string &newname) {
  // File (or directory) with old name
  fs::path file(oldname);

  // File (or directory) with new name
  fs::path file2(newname);

  // Rename file (or directory)
  bool success = fs::rename(file, file2);
  return success;
}

void test(const std::string &type, const std::string &oldname,
          const std::string &newname) {
  std::cout << "The following " << type << " called " << oldname
            << (renameFile(oldname, newname) ? " was renamed as "
                                             : " could not be renamed into ")
            << newname << "." << std::endl;
}

int main() {
  // Test in the current working directory
  test("file", "input.txt", "output.txt");

  // Test in the filesystem root
  test("file", "/input.txt", "/output.txt");

  // Test for directories in the current working directory
  test("directory", "docs", "mydocs");

  // Test for directories in the filesystem root
  test("directory", "/docs/", "/mydocs/");

  return 0;
}