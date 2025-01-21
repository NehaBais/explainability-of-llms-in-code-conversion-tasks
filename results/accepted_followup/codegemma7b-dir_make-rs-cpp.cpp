#include <filesystem>

int main() {
  std::filesystem::create_directories("./path/to/dir");
  return 0;
}