#include <filesystem>
#include <iostream>

int main() {
  namespace fs = std::filesystem;

  fs::path p{"./path/to/dir"};

  try {
    if (!fs::exists(p)) {        // If the path does not exist...
      fs::create_directories(p); // Create all directories along the path.
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "An error occured: " << e.what() << '\n';
  }

  return 0;
}