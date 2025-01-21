#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  // Create an empty file "output.txt" in the current working directory
  std::ofstream outFile("output.txt");
  if (!outFile) {
    std::cerr << "Error creating output.txt" << std::endl;
    return 1;
  }
  outFile.close();

  // Create an empty directory "docs" in the current working directory
  int mkdir_result = mkdir("docs", 0750);
  if (mkdir_result != 0) {
    std::cerr << "Error creating docs directory" << std::endl;
    return 1;
  }

  // Repeat the same operations for the filesystem root
  int fd = open("/output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0640);
  if (fd == -1) {
    std::cerr << "Error creating output.txt in root" << std::endl;
    return 1;
  }
  close(fd);

  mkdir("/docs", 0750);

  return 0;
}