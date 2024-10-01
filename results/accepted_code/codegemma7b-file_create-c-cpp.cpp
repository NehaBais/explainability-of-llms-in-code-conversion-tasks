#include <filesystem>
#include <iostream>

int main() {
  // Here
  std::filesystem::create_directory("docs");
  std::filesystem::create_file("output.txt", std::ios::out);

  // In filesystem root
  std::filesystem::path root_path("/");
  std::filesystem::create_directory(root_path / "docs");
  std::filesystem::create_file(root_path / "output.txt", std::ios::out);

  return 0;
}