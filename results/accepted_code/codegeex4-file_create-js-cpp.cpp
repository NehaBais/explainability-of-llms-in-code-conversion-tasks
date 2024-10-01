#include <filesystem>
#include <iostream>

void createFilesAndDirectories(const std::string &path) {
  std::error_code ec;

  // Create a file
  std::ofstream ofs(path + "/output.txt",
                    std::ios_base::out | std::ios_base::trunc);
  if (!ofs) {
    std::cout << "Error creating file: " << strerror(errno) << '\n';
  }

  // Create a directory
  if (!std::filesystem::create_directory(path + "/docs", ec)) {
    std::cerr << "Error creating directory: " << ec.message() << '\n';
  }
}

int main() {
  // Create files and directories in the current working directory
  createFilesAndDirectories(".");

  // Create files and directories in the root filesystem path (this will not
  // work on Windows)
  if (std::filesystem::path("/").exists()) {
    createFilesAndDirectories("/");
  }

  return 0;
}