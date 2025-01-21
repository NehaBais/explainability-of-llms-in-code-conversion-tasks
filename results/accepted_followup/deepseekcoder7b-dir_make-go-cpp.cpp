#include <experimental/filesystem>
#include <iostream>

bool create_dir(const std::string &path) {
  try {
    if (!std::experimental::filesystem::exists(path)) {
      // create directory recursively
      std::experimental::filesystem::create_directories(path);
      return true;
    } else {
      // directory exists, so return false
      return false;
    }
  } catch (const std::experimental::filesystem::filesystem_error &e) {
    // Handle exception by logging it or ignore for now
    std::cout << e.what() << '\n';
  }
}