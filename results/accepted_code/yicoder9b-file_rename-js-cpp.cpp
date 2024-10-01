#include <filesystem>
namespace fs = std::filesystem;

int main() {
  fs::rename("input.txt", "output.txt");
  fs::rename("docs", "mydocs");
  fs::rename("/input.txt", "/output.txt");
  fs::rename("/docs", "/mydocs");
}