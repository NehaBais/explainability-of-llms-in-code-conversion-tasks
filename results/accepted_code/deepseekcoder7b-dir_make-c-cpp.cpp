#include <filesystem>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "usage: " << argv[0] << " <path>\n";
    return 1;
  }

  const std::string path = argv[1];

  // If the directory exists, we do nothing and exit successfully.
  if (std::filesystem::exists(path)) {
    return 0;
  }

  // Creates the directories recursively using C++17 filesystem library
  std::error_code ec;
  bool success = std::filesystem::create_directories(path, ec);

  if (!success) {
    std::cerr << "couldn't create directory: " << path << "\n";
    return 1;
  }

  return 0;
}