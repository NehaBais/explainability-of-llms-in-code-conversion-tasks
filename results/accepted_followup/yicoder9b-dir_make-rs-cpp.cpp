#include <boost/filesystem.hpp> // Include boost filesystem header file
#include <iostream> // Include iostream for input-output stream operations

int main() {
  namespace fs = boost::filesystem; // Create a namespace alias for simplicity

  fs::path dir_path("./path/to/dir"); // Define the directory path to be created
  try {
    if (!fs::create_directories(
            dir_path)) { // Try creating directories, handle any exceptions
      std::cerr << "Failed to create directories: " << dir_path << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    // Catch and handle any filesystem related errors
    std::cerr << "Filesystem Exception thrown: " << e.what()
              << std::endl; // Print error message
  }
  return 0;
}