#include
#include
bool checkFileExists(const std::string &filename) {
  std::ifstream file(filename);
  return file.good();
}
int main() {
  // Check if input.txt exists in the current working directory
  bool fileExists = checkFileExists("input.txt");
  if (!fileExists) {
    std::cout
        << "Error: input.txt does not exist in the current working directory."
        << std::endl;
    return 1;
  }
  // Check if docs exists in the current working directory
  bool dirExists = (std::filesystem::exists("docs") &&
                    std::filesystem::is_directory("docs"));
  if (!dirExists) {
    std::cout << "Error: docs does not exist in the current working directory."
              << std::endl;
    return 1;
  }
  // Check if input.txt exists in the filesystem root
  fileExists = checkFileExists("/input.txt");
  if (!fileExists) {
    std::cout << "Error: input.txt does not exist in the filesystem root."
              << std::endl;
    return 1;
  }
  // Check if docs exists in the filesystem root
  dirExists = (std::filesystem::exists("/docs") &&
               std::filesystem::is_directory("/docs"));
  if (!dirExists) {
    std::cout << "Error: docs does not exist in the filesystem root."
              << std::endl;
    return 1;
  }
  return 0;
}