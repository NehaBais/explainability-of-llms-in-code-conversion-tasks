#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

bool renameFile(const std::string &oldname, const std::string &newname) {
  // File (or directory) with old name
  fs::path file(oldname);
  // File (or directory) with new name
  fs::path file2(newname);

  // Rename file (or directory)
  return fs::rename(file, file2);
}

void test(const std::string &type, const std::string &oldname,
          const std::string &newname) {
  std::cout << "The following " + type + " called " + oldname +
                   (renameFile(oldname, newname)
                        ? " was renamed as "
                        : " Could not be renamed into ") +
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