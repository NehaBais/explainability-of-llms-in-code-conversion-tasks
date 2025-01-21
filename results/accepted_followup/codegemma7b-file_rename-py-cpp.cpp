#include <filesystem>

namespace fs = std::filesystem;

int main() {
  // Rename in current working directory
  fs::rename("input.txt", "output.txt");
  fs::rename("docs", "mydocs");

  // Rename in filesystem root
  fs::rename(fs::path(fs::sep) / "input.txt", fs::path(fs::sep) / "output.txt");
  fs::rename(fs::path(fs::sep) / "docs", fs::path(fs::sep) / "mydocs");

  return 0;
}