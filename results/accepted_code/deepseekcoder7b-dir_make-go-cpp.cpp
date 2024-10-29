#include <filesystem>
#include <iostream>

bool create_dir(const std::string &path) {
  try {
    if (!std::filesystem::exists(path)) {
      // create directory recursively
      std::filesystem::create_directories(path);
      return true;
    } else {
      // directory exists, so return false
      return false;
<｜begin▁of▁sentence｜>
    }
  } catch (const std::filesystem::filesystem_error &e) {
    // Handle exception by logging it or ignore for now
    std::cout << e.what() << '\n';
  }
}