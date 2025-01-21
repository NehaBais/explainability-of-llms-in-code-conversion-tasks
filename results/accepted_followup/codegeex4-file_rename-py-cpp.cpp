#include <filesystem>
#include <iostream>

int main() {
  // In current working directory

  std::filesystem::rename("input.txt", "output.txt");
  std::filesystem::rename("docs", "mydocs");

  // In filesystem root
  try {
    std::filesystem::rename("/", "/input.txt",
                            std::filesystem::rename_options::replace_existing);
    std::filesystem::rename("/", "/docs",
                            std::filesystem::rename_options::replace_existing);
  } catch (const std::exception &e) {
    std::cerr << "Error renaming in filesystem root: " << e.what() << '\n';
  }

  return 0;
}