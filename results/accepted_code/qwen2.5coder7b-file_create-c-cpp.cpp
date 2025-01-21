#include <filesystem>
#include <fstream>

int main() {
  // Permissions are before umask
  std::ofstream ofs("output.txt", std::ios::out | std::ios::trunc);
  if (ofs.is_open()) {
    ofs.close();
  }

  std::filesystem::create_directory("docs");

  return 0;
}