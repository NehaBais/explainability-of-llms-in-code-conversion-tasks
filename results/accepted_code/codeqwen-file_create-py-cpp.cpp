#include <filesystem>

void create(const std::string &directory) {
  std::filesystem::path dirPath = directory;
  std::ofstream ofs(dirPath / "output.txt");
  std::filesystem::create_directories(dirPath / "docs");
}

int main() {
  create("."); // current directory
  create("/"); // root directory

  return 0;
}