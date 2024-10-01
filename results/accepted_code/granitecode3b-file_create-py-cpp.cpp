#include
#include
#include
int main() {
  std::filesystem::path current_directory = ".";
  std::filesystem::path root_directory = "/";
  createFile(current_directory);
  createDirectory(root_directory);
  return 0;
}
void createFile(const std::filesystem::path &directory) {
  std::ofstream file(directory.string() + "/output.txt");
  if (file.is_open()) {
    file.close();
  }
}
void createDirectory(const std::filesystem::path &directory) {
  std::filesystem::create_directory(directory.string() + "/docs");
}