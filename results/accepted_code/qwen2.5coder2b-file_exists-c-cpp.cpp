#include <filesystem>
#include <iostream>

bool file_exists(const std::string &path) {
  return std::filesystem::exists(path);
}

bool directory_exists(const std::string &path) {
  return std::filesystem::is_directory(path);
}

int main() {
  if (file_exists("input.txt")) {
    std::cout << "input.txt is a regular file." << std::endl;
  } else {
    std::cout << "input.txt is not a regular file." << std::endl;
  }

  if (directory_exists("docs")) {
    std::cout << "docs is a directory." << std::endl;
  } else {
    std::cout << "docs is not a directory." << std::endl;
  }

  if (file_exists("/input.txt")) {
    std::cout << "/input.txt is a regular file." << std::endl;
  } else {
    std::cout << "/input.txt is not a regular file." << std::endl;
  }

  if (directory_exists("/docs")) {
    std::cout << "/docs is a directory." << std::endl;
  } else {
    std::cout << "/docs is not a directory." << std::endl;
  }
  return 0;
}