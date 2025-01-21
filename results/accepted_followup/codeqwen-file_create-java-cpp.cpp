#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  try {
    std::filesystem::create_directories("here/docs");
    std::filesystem::create_directories("/docs");
    std::ofstream outputFile1;
    outputFile1.open("here/output.txt", std::ios::out);
    if (!outputFile1.is_open()) {
      throw std::runtime_error("Failed to open file 'here/output.txt'");
    }
    std::ofstream outputFile2;
    outputFile2.open("/output.txt", std::ios::out);
    if (!outputFile2.is_open()) {
      throw std::runtime_error("Failed to open file '/output.txt'");
    }
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << '\n';
  }

  return 0;
}