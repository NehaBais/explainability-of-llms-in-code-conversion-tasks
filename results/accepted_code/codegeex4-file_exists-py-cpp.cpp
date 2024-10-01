#include <fstream>
#include <iostream>
#include <sys/stat.h>

int main() {
  // Checking for input.txt and docs in current directory
  std::ifstream file("input.txt");
  bool fileExists = file.good();
  struct stat info;
  bool dirExists = (stat("docs", &info) == 0 && (info.st_mode & S_IFDIR) != 0);

  if (fileExists)
    std::cout << "File exists in current directory\n";
  else
    std::cout << "File does not exist in current directory\n";

  if (dirExists)
    std::cout << "Directory exists in current directory\n";
  else
    std::cout << "Directory does not exist in current directory\n";

  // Checking for input.txt and docs in root directory
  file.open("/input.txt");
  fileExists = file.good();
  dirExists = (stat("/docs", &info) == 0 && (info.st_mode & S_IFDIR) != 0);

  if (fileExists)
    std::cout << "File exists in root directory\n";
  else
    std::cout << "File does not exist in root directory\n";

  if (dirExists)
    std::cout << "Directory exists in root directory\n";
  else
    std::cout << "Directory does not exist in root directory\n";

  return 0;
}