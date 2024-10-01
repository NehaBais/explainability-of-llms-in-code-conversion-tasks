#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  create(".");
  create("/");
  return 0;
}

void create(const std::string &root) {
  fs::create_directory(root + "/docs");
  std::ofstream f(root + "/output.txt");
}

void error_handler(const std::exception &error, int code) {
  std::cerr << "Error: " << error.what() << std::endl;
  exit(code);
}