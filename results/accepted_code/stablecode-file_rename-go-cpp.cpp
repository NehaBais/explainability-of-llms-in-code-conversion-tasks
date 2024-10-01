#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {

  // Renaming in current working directory
  fs::rename("input.txt", "output.txt");
  fs::rename("docs", "mydocs");

  // Renaming in filesystem root
  fs::path root("/");
    fs::rename(root / "input.txt", root / "output.txt"));
    fs::rename(root / "docs", root / "mydocs");

    return 0;
}