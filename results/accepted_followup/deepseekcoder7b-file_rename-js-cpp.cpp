#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

int main() {
  fs::rename("input.txt", "output.txt");
  fs::rename("/input.txt", "/output.txt");
  fs::rename("docs", "mydocs");
  fs::rename("/docs", "/mydocs");

  return 0;
}