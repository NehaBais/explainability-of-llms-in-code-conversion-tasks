#include <experimental/filesystem>
#include <iostream>

int main() {
  std::string path = "/tmp/some/path/to/dir";
  // Create a directory and any missing parents.
  std::experimental::filesystem::create_directories(path);

  return 0;
}