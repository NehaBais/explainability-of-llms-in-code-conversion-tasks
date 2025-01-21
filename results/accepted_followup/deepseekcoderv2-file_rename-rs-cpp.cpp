#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  const char *err_msg = "File move error";

  // In current working directory
  try {
    fs::rename("input.txt", "output.txt");
  } catch (const fs::filesystem_error &e) {
    std::cerr << err_msg << ": " << e.what() << '\n';
    return 1;
  }

  try {
    fs::rename("docs", "mydocs");
  } catch (const fs::filesystem_error &e) {
    std::cerr << err_msg << ": " << e.what() << '\n';
    return 1;
  }

  // In filesystem root
  try {
    fs::rename("/input.txt", "/output.txt");
  } catch (const fs::filesystem_error &e) {
    std::cerr << err_msg << ": " << e.what() << '\n';
    return 1;
  }

  try {
    fs::rename("/docs", "/mydocs");
  } catch (const fs::filesystem_error &e) {
    std::cerr << err_msg << ": " << e.what() << '\n';
    return 1;
  }

  return 0;
}