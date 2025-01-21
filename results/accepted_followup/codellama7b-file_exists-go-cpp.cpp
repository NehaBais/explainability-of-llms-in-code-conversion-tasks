#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  struct stat inputStat;
  std::string currentDirectoryPath = ".";
  if (stat64(currentDirectoryPath, &inputStat) == -1) {
    perror("stat");
    return 1;
  }
  bool isInputTextFile = S_ISREG(inputStat.st_mode);
  std::cout << "Is input.txt a file? " << isInputTextFile << '\n';

  struct stat docsStat;
  std::string rootPath = "/";
  if (stat64(rootPath, &docsStat) == -1) {
    perror("stat");
    return 1;
  }
  bool isDocsDirectory = S_ISDIR(inputStat.st_mode);
  std::cout << "Is docs a directory? " << isDocsDirectory << '\n';
  return 0;
}