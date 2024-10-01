#include <filesystem>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

bool renameFile(const string &oldname, const string &newname) {
  // File (or directory) with old name
  fs::path file(oldname);

  // File (or directory) with new name
  fs::path file2(newname);

  // Rename file (or directory)
  bool success = file.renameTo(file2);
  return success;
}

void test(const string &type, const string &oldname, const string &newname) {
  cout << "The following " << type << " called " << oldname;
  if (renameFile(oldname, newname)) {
    cout << " was renamed as ";
  } else {
    cout << " could not be renamed into ";
  }
  cout << newname << "." << endl;
}

int main() {
  test("file", "input.txt", "output.txt");
  test("file", std::filesystem::path("/") + "input.txt",
       std::filesystem::path("/") + "output.txt");
  test("directory", "docs", "mydocs");
  test("directory",
       std::filesystem::path("/") + "docs" + std::filesystem::path::separator,
       std::filesystem::path("/") + "mydocs" +
           std::filesystem::path::separator);
  return 0;
}