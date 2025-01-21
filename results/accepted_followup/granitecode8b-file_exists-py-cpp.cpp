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
  }

  // Check if docs exists in the current working directory
  bool dirExists = (std::filesystem::exists("docs") &&
                    std::filesystem::is_directory("docs"));
  if (!dirExists) {
    std::cout << "Error: docs does not exist in the current working directory."
              << std::endl;
  }

  // Check if input.txt exists in the parent directory
  fileExists = checkFileExists("../input.txt");
  if (!fileExists) {
    std::cout << "Error: input.txt does not exist in the filesystem root."
              << std::endl;
  }

  // Check if docs exists in the parent directory
  dirExists = (std::filesystem::exists("../docs") &&
               std::filesystem::is_directory("../docs"));
  if (!dirExists) {
    std::cout << "Error: docs does not exist in the filesystem root."
              << std::endl;
  }

  return 0;
}