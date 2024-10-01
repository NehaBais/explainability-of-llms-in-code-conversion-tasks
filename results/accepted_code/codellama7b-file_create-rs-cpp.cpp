#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";

int main() {
  create(".", "/");
  return 0;
}

void create(std::string root, std::string path) {
  std::filesystem::path f_path = root + "/" + FILE_NAME;
  std::filesystem::path d_path = root + "/" + DIR_NAME;
  try {
    std::ofstream file(f_path, std::ios::out);
    std::filesystem::create_directory(d_path);
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    exit(1);
  }
}