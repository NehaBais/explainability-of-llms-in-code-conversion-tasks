#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main() {
  // Rename input.txt into output.txt in the current working directory
  fs::rename("input.txt", "output.txt");

  // Rename docs into mydocs in the filesystem root
  fs::path root("/");
  fs::rename(root / "docs", root / "mydocs");

  return 0;
}