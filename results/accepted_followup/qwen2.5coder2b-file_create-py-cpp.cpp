#include <iostream>
#include <string>
#include <sys/stat.h>

void create(const std::string &directory) {
  // Create an output file of size 0 bytes
  std::ofstream outputFile(directory + "/output.txt");

  if (!outputFile.is_open()) {
    std::cerr << "Failed to create the output file." << std::endl;
    return;
  }
  outputFile.close();

  // Create a directory named 'docs'
  const char *dirname = "docs";
  mkdir(directory.c_str(), 0755);

  if (mkdir(dirname, 0755) == -1 && errno != EEXIST) {
    std::cerr << "Failed to create the docs directory." << std::endl;
    return;
  }
}

int main() {
  // Create in current working directory
  create(".");

  // Create in filesystem root
  create("/");

  return 0;
}