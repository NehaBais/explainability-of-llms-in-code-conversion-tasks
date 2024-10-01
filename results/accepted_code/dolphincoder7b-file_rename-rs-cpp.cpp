#include <filesystem>
#include <iostream>

int main() {
  namespace fs = std::filesystem;

  if (fs::exists("input.txt")) {
    try {
      // Move "docs" to "mydocs" in current working directory
      fs::rename("input.txt", "output.txt");
      fs::rename("docs", "mydocs");

      // Move "docs" to "mydocs" in filesystem root
      fs::rename("/input.txt", "/output.txt");
      fs::rename("/docs", "/mydocs");
    } catch (std::filesystem::filesystem_error &e) {
      std::cerr << e.what() << '\n';
      return EXIT_FAILURE;
    }
  } else {
    std::cout << "The file 'input.txt' does not exist.\n";
    return 1;
  }
}