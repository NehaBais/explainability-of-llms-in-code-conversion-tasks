#include <filesystem>
namespace fs = std::filesystem;

int main() {
  // Rename "input.txt" into "output.txt" in current working directory
  fs::rename("input.txt", "output.txt");

  // Rename "docs" into "mydocs" in current working directory
  fs::rename("docs", "mydocs");

  // Move all files from old directory to new one and delete the old directory
  // in root
  for (const auto &entry : fs::directory_iterator("/root/docs")) {
    if (!entry.is_directory())
      fs::rename(entry, "/root/mydocs/" + entry.path().filename());
  }

  // Remove the empty "docs" directory in root
  fs::remove("/root/docs");

  return 0;
}