#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  try {
    // Create file "output.txt" in current directory
    fs::path currentFilePath("output.txt");
    if (!fs::exists(currentFilePath)) {
      fs::create_directories(currentFilePath.parent());
      std::ofstream ofs(currentFilePath);
      ofs.close();
    }

    // Create file "output.txt" in root directory
    fs::path rootFilePath(
        "C:\\output.txt"); // Modify this path according to your requirements
    if (!fs::exists(rootFilePath))) {
        std::ofstream ofs(rootFilePath);
        ofs.close();
      }

    // Create directory "docs" in current directory
    fs::path currentDirPath("docs");
    if (!fs::exists(currentDirPath))) {
            fs::create_directory(currentDirPath));
      }

    // Create directory "docs" in root directory
    fs::path rootDirPath(
        "C:\\docs"); // Modify this path according to your requirements
    if (!fs::exists(rootDirPath))) {
            fs::create_directory(rootDirPath));
      }
  } catch (std::exception &e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  return 0;
}