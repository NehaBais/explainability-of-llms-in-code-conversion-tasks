#include <filesystem>
#include <iostream>

int main() {
  std::string err = "File move error";
  std::filesystem::rename("input.txt", "output.txt");
  std::filesystem::rename("docs", "mydocs");
  std::filesystem::rename("/input.txt", "/output.txt");
  std::filesystem::rename("/docs", "/mydocs");

  return 0;
}