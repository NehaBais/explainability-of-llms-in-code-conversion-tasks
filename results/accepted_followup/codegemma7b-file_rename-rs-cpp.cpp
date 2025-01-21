#include <filesystem>

int main() {
  const std::string err = "File move error";

  std::filesystem::rename("input.txt", "output.txt");
  std::filesystem::rename("docs", "mydocs");

  // Use absolute paths
  std::filesystem::rename("/input.txt", "/output.txt");
  std::filesystem::rename("/docs", "/mydocs");

  return 0;
}