#include <experimental/filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::experimental::filesystem;
int main() {
  std::string path1 = "."; // current working directory
  std::string filePath1 = fs::absolute(path1) / "input.txt";
  std::string dirPath1 = fs::absolute(path1) / "docs";

  // Check if the files and directories exist
  if (fs::exists(filePath1)) {
    if (fs::is_regular_file(filePath1))
      std::cout << "File input.txt exists.\n";
  }

  std::string path2 = "/"; // filesystem root directory
  std::string filePath2 = fs::absolute(path2) / "input.txt";
  std::string dirPath2 = fs::absolute(path2) / "docs";

  if (fs::exists(filePath2)) {
    if (fs::is_regular_file(filePath2))
      std::cout << "File input.txt in root directory exists.\n";
  }

  return <｜begin▁of▁sentence｜ > 0;
}