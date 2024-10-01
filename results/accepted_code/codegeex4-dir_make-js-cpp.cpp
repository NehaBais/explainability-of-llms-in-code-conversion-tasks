#include <filesystem>
#include <iostream>

void mkdirp(const std::string &p) {
  try {
    // Attempt to create the directory
    std::filesystem::create_directories(p);
  } catch (const std::filesystem::filesystem_error &e) {
    if (e.code() ==
        std::make_error_code(std::errc::no_such_file_or_directory)) {
      // Directory doesn't exist. Make its parent and try again.
      auto pos = p.find_last_of('/');
      if (pos != std::string::npos) {
        mkdirp(p.substr(0, pos));
        mkdirp(p);
      } else {
        throw; // Throw the exception upwards
      }
    } else {
      throw;
    }
  }
}

int main() {
  try {
    mkdirp("/path/to/dir");
    std::cout << "Directory created successfully.\n";
  } catch (const std::exception &e) {
    std::cerr << "Error creating directory: " << e.what() << "\n";
  }

  return 0;
}