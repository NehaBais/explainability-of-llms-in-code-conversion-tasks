#include <filesystem>
#include <iostream>

int main() {
  auto fileSize = [](const std::string &path) {
    namespace fs = std::filesystem;
    if (fs::exists(path)) {
      return fs::file_size(path);
    } else {
      throw std::runtime_error("File does not exist");
    }
  };

  try {
    std::cout << "Size of current directory's 'input.txt': "
              << fileSize("./input.txt") << '\n';
    std::cout << "Size of root directory's 'input.txt': "
              << fileSize("/input.txt") << '\n';
  } catch (const std::exception &e) {
    std::cerr << e.what() << "\n";
    return 1;
  }

  return 0;
}