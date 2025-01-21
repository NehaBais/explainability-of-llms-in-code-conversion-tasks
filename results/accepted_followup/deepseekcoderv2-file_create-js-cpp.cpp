#include <filesystem>
#include <fstream>
#include <iostream>

void handleError(const std::error_code &err) {
  if (err) {
    std::cerr << "Error: " << err.message() << '\n';
  }
}

int main() {
  // Create an empty file in the current working directory
  std::ofstream("output.txt");
  handleError(std::error_code());

  // Create an empty file in the root directory
  std::ofstream("/output.txt");
  handleError(std::error_code());

  // Create an empty directory in the current working directory
  std::filesystem::create_directory("docs", std::error_code());
  handleError(std::error_code());

  // Create an empty directory in the root directory
  std::filesystem::create_directory("/docs", std::error_code());
  handleError(std::error_code());

  return 0;
}