#include <filesystem>
#include <fstream>
#include <iostream>

// Function to handle errors
void fct(const std::error_code &ec) {
  if (ec) {
    std::cerr << "Error: " << ec.message() << std::endl;
  }
}

int main() {
  try {
    // Current working directory
    std::string currentPath = std::filesystem::current_path().string();

    // Create an empty file in the current working directory
    std::ofstream ofs1(currentPath + "/output.txt");
    if (!ofs1) {
      fct(std::error_code());
    } else {
      ofs1.close();
    }

    // Create a directory in the current working directory
    if (!std::filesystem::create_directory(currentPath + "/docs")) {
      fct(std::error_code());
    }

    // Root directory
    std::string rootPath = "/";

    // Create an empty file in the filesystem root (if possible)
    std::ofstream ofs2(rootPath + "/output.txt");
    if (!ofs2) {
      fct(std::error_code());
    } else {
      ofs2.close();
    }

    // Create a directory in the filesystem root (if possible)
    if (!std::filesystem::create_directory(rootPath + "/docs")) {
      fct(std::error_code());
    }
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}