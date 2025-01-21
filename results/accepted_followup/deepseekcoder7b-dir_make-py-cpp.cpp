#include <filesystem>
#include <iostream>

void mkdirp(std::string path) {
  std::error_code ec;

  if (!std::filesystem::exists(path)) { // Check if directory exists
    std::filesystem::create_directories(path, ec);

    if (ec) {
      throw std::runtime_error("Error occurred: " + std::string(ec.message()));
    }
  }
}