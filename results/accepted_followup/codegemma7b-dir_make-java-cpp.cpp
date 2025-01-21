#include <filesystem>

namespace fs = std::filesystem;

void mkdir_p(const std::string &path) {
  try {
    fs::create_directories(path);
    std::cout << "Path successfully created" << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
}

int main() {
  mkdir_p("C:/parent/test");
  return 0;
}