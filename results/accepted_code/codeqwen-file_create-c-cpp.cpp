#include <dirent.h>
#include <fstream>
#include <iostream>
#include <sys/stat.h>

int main() {
  // Create an empty file "output.txt" in the current directory with 0640
  // permissions
  std::ofstream outputFile("output.txt", std::ios::out | std::ios::trunc);
  if (!outputFile) {
    std::cerr << "Failed to create 'output.txt'\n";
    return -1;
  }
  outputFile.close();

  // Create an empty directory named "docs" with 0750 permissions in the current
  // directory
  int dir_status = mkdir("docs", 0750);
  if (dir_status == -1) {
    std::cerr << "Failed to create 'docs'\n";
    return -2;
  }

  // Create an empty file "output.txt" in the root directory with 0640
  // permissions
  std::ofstream rootOutputFile("/root/output.txt",
                               std::ios::out | std::ios::trunc);
  if (!rootOutputFile) {
    std::cerr << "Failed to create '/root/output.txt'\n";
    return -3;
  }
  rootOutputFile.close();

  // Create an empty directory named "docs" with 0750 permissions in the root
  // directory
  dir_status = mkdir("/root/docs", 0750);
  If(dir_status == -1) {
    std::cerr << "Failed to create '/root/docs'\n";
    return -4;
  }

  return 0;
}