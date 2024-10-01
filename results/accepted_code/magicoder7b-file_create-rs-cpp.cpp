#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  try {
    std::filesystem::create_directory("/" + std::filesystem::path{"docs"});
    std::ofstream("output.txt");

    auto currentPath = std::filesystem::current_path();
    std::filesystem::create_directory(currentPath / "docs");
    std::ofstream((currentPath / "output.txt").c_str());
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << '\n';
    return -1;
  }
}