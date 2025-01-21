#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::path current_path = std::filesystem::current_path();

  // Rename files and directories in the current working directory
  try {
    if (std::filesystem::exists(current_path / "input.txt")) {
      std::filesystem::rename(current_path / "input.txt",
                              current_path / "output.txt");
    }
    if (std::filesystem::exists(current_path / "docs")) {
      std::filesystem::rename(current_path / "docs", current_path / "mydocs");
    }
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "Error: " << e.what() << '\n';
    return 1;
  }

  // Rename files and directories in the filesystem root
  try {
    if (std::filesystem::exists(std::filesystem::path("/") / "input.txt")) {
      std::filesystem::rename(std::filesystem::path("/") / "input.txt",
                              std::filesystem::path("/") / "output.txt");
    }
    if (std::filesystem::exists(std::filesystem::path("/") / "docs")) {
      std::filesystem::rename(std::filesystem::path("/") / "docs",
                              std::filesystem::path("/") / "mydocs");
    }
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "Error: " << e.what() << '\n';
    return 1;
  }

  std::cout << "Files and directories renamed successfully.\n";
  return 0;
}