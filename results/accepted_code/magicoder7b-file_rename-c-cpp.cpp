#include <filesystem>
#include <iostream>

int main() {
  try {
    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("docs", "mydocs");
    std::filesystem::rename("/input.txt", "/output.txt");
    std::filesystem::rename("/docs", "/mydocs");
  } catch (const std::exception &e) {
    std::cerr << "Error occurred: " << e.what() << '\n';
  }

  return 0;
}