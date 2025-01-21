#include <fstream>
#include <iostream>
#include <sys/stat.h>

int main() {
  // Create a new empty file in the current working directory
  std::ofstream outfile("output.txt");
  if (!outfile) {
    std::cerr << "Error: failed to create output.txt" << std::endl;
    return 1;
  }

  // Create a new empty file in the filesystem root
  std::ofstream outfile2("/output.txt");
  if (!outfile2) {
    std::cerr << "Error: failed to create /output.txt" << std::endl;
    return 1;
  }

  // Create a new empty directory in the current working directory
  mkdir("docs", 0755);
  if (errno) {
    std::cerr << "Error: failed to create docs directory" << std::endl;
    return 1;
  }

  // Create a new empty directory in the filesystem root
  mkdir("/docs", 0755);
  if (errno) {
    std::cerr << "Error: failed to create /docs directory" << std::endl;
    return 1;
  }

  return 0;
}