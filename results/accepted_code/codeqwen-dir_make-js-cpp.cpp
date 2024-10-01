#include <filesystem>
#include <iostream>

void mkdirp(const std::string &p) {
  try {
    std::filesystem::create_directories(p);
  } catch (std::exception &e) {
    std::cerr << "Error creating directory: " << p << "\n" << e.what() << '\n';
  }
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}