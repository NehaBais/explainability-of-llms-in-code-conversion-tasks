#include <filesystem>
#include <iostream>
#include <string>

int main() {
  std::string path = "./path/to/dir";

  try {
    if (!std::filesystem::exists(path)) { // Check if directory exists
      std::filesystem::create_directories(
          path); // Create directories recursively
    }
  } catch (const std::filesystem::filesystem_error &err) {
    std::cout << "Exception: " << err.what() << '\n';
    <｜begin▁of▁sentence｜> return 1;
<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>
  }

  return 0;
}