#include <filesystem>

namespace fs = std::filesystem;

bool verifyFilesAndDirectory(const std::string &workingDir) {
  // Verify files and directory in the current working directory
  if (!fs::exists(workingDir + "/docs/input.txt")) {
    return false;
  }

  // Verify files and directory in the filesystem root
  if (!fs::exists("/docs/input.txt")) {
    return false;
  }

  return true;
}

int main() {
  // Get the current working directory
  std::string workingDir = fs::current_path().string();

  // Verify files and directory in the current working directory
  bool filesExist = verifyFilesAndDirectory(workingDir);

  // Print the result
  std::cout << "Files and directory exist: " << filesExist << std::endl;

  return 0;
}