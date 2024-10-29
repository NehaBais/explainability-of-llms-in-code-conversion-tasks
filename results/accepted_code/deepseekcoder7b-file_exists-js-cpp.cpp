#include <filesystem>
#include <fstream>
#include <iostream>
int main() {
  std::string path1 = "."; // current working directory
  std::string filePath1 = path1 + "/input.txt";
  std::string dirPath1 = path1 + "/docs";

  // Check if the files and directories exist
  if (std::filesystem::exists(filePath1)) {
    if (std::filesystem::is_regular_file(filePath1))
      std::cout << "File input.txt exists.\n";
  }

  std::string path2 = "/"; // filesystem root directory
  std::string filePath2 = path2 + "input.txt";
  std::string dirPath2 = path2 + "docs";

  if (std::filesystem::exists(filePath2)) {
    if (std::filesystem::is_regular_file(filePath2))
      std::cout << "File input.txt in root directory exists.\n";
  }

  return 0;
}