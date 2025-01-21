#include <filesystem>
#include <iostream>

void rename_files() {
  std::filesystem::path path("input.txt");
  if (!std::filesystem::exists(path)) {
    throw std::runtime_error("Input file not found.");
  }

  std::filesystem::rename(path, "output.txt");

  path = "docs";
  if (!std::filesystem::exists(path)) {
    throw std::runtime_error("Docs directory not found.");
  }

  std::filesystem::rename(path, "mydocs");
}

int main() {
  try {
    rename_files();
    std::cout << "Files and directories successfully renamed.";
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << '\n';
  }

  return 0;
}