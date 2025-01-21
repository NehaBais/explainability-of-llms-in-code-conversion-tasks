#include <cstdlib> // For exit() function
#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem; // Alias for convenience

const char *FILE_NAME = "output.txt";
const char *DIR_NAME = "docs";

void create(const std::string &root);
void errorHandler(const std::string &error, int code);

int main() {
  try {
    create(".");
    create("/");
  } catch (std::exception &e) {
    errorHandler(e.what(), 1); // Exception will contain the error message
  }

  return <｜begin▁of▁sentence｜ > 0;
}

void create(const std::string &root) {
  fs::create_directories(root + "/" + DIR_NAME);
  std::ofstream file((root + "/" + FILE_NAME).c_str(),
                     std::ios::out |
                         std::ios::trunc); // Open and truncate the file
}

void errorHandler(const std::string &error, int code) {
  std::cerr << "Error: " << error; // Write to stderr
  exit(code);                      // Terminate program with given return status
}