#include <filesystem>

void renameFile(const std::string &oldName, const std::string &newName) {
  if (std::filesystem::exists(oldName)) {
    std::filesystem::rename(oldName, newName);
  }
}

void renameFolder(const std::string &oldName, const std::string &newName) {
  if (std::filesystem::exists(oldName)) {
    std::filesystem::rename(oldName, newName);
  }
}

int main() {
  renameFile("input.txt", "output.txt");
  renameFile("c:/input.txt", "c:/output.txt");
  renameFolder("docs", "mydocs");
  renameFolder("c:/docs", "c:/mydocs");
  return 0;
}