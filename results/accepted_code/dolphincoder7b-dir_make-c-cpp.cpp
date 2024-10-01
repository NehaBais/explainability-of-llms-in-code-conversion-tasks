#include <filesystem>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "usage: " << argv[0] << " <path>" << std::endl;
    return EXIT_FAILURE;
  }

  std::string str = argv[1];
  std::vector<std::string> directories;
  size_t pos = 0;
  while ((pos = str.find('/')) != std::string::npos) {
    directories.push_back(str.substr(0, pos));
    str = str.substr(pos + 1);
  }

  for (const auto &directory : directories) {
    if (!std::filesystem::exists(directory)) {
      try {
        std::filesystem::create_directory(directory);
      } catch (...) {
        std::cerr << "couldn't create directory " << directory << std::endl;
        return EXIT_FAILURE;
      }
    }
  }

  return 0;
}