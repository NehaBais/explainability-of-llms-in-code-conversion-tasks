#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  // Create file in current directory
  std::ofstream outFile("output.txt");

  if (!outFile) {
    std::cerr << "Failed to create output.txt" << std::endl;
    return 1;
  }
  std::cout << "file output.txt created!" << std::endl;
  outFile.close();

  // Create file in filesystem root
  std::ofstream outRoot("/output.txt");

  if (!outRoot) {
    std::cerr << "Failed to create /output.txt" << std::endl;
    return 1;
  }
  std::cout << "file /output.txt created!" << std::endl;
  outRoot.close();

  // Create directory in current directory
  if (!std::filesystem::create_directory("docs")) {
    std::cerr << "Failed to create docs" << std::endl;
    return 1;
  }
  std::cout << "directory docs created!" << std::endl;

  // Create directory in filesystem root
  if (!std::filesystem::create_directory("/docs")) {
    std::cerr << "Failed to create /docs" << std::endl;
    return 1;
  }
  std::cout << "directory /docs created!" << std::endl;

  return 0;
}