#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

bool renameFile(const fs::path &oldname, const fs::path &newname) {
  return fs::rename(oldname, newname);
}

void test(const std::string &type, const fs::path &oldname,
          const fs::path &newname) {
  std::cout << "The following " << type << " called "
            << oldname.filename().string()
            << (renameFile(oldname, newname) ? " was renamed as "
                                             : " could not be renamed into ")
            << newname.filename().string() << "." << std::endl;
}

int main() {
  fs::path currentDir = fs::current_path();
  test("file", currentDir / "input.txt", currentDir / "output.txt");
  test("directory", currentDir / "docs" / "", currentDir / "mydocs" / "");

  fs::path rootDir = fs::path("/");
  test("file", rootDir / "input.txt", rootDir / "output.txt");
  test("directory", rootDir / "docs" / "", rootDir / "mydocs" / "");

  return 0;
}