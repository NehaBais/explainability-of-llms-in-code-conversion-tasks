#include <filesystem>

int main() {
  std::filesystem::rename("input.txt", "output.txt");
  std::filesystem::rename("docs", "mydocs");
  std::filesystem::rename("/input.txt", "/output.txt");
  std::filesystem::rename("/docs", "/mydocs");
  return 0;
}