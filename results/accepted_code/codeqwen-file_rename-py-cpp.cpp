#include <filesystem>

int main() {
  std::filesystem::rename("input.txt", "output.txt");
  std::filesystem::rename("docs", "mydocs");

  // for files in root directory
  std::string root = "/"; // Replace with your desired root directory
  std::filesystem::rename(root + "input.txt", root + "output.txt");
  std::filesystem::rename(root + "docs", root + "mydocs");

  return 0;
}