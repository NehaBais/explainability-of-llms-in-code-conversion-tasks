#include
#include
int main() {
  bool cwdFileExists = false;
  bool cwdDirExists = false;
  bool fsFileExists = false;
  bool fsDirExists = false;

  // Check if input.txt exists in the current working directory
  std::ifstream file("input.txt");
  if (file) {
    cwdFileExists = true;
  }

  // Check if docs exists in the current working directory
  struct stat info;
  int result = stat("docs", &info);
  if (result == 0 && S_ISDIR(info.st_mode)) {
    cwdDirExists = true;
  }

  // Check if input.txt exists in the root filesystem directory
  file.open("/input.txt");
  if (file) {
    fsFileExists = true;
  }

  // Check if docs exists in the root filesystem directory
  result = stat("/docs", &info);
  if (result == 0 && S_ISDIR(info.st_mode)) {
    fsDirExists = true;
  }

  // Print the results
  std::cout << "Current working directory:" << std::endl;
  std::cout << " input.txt: " << cwdFileExists << std::endl;
  std::cout << " docs: " << cwdDirExists << std::endl;
  std::cout << "Root filesystem directory:" << std::endl;
  std::cout << " input.txt: " << fsFileExists << std::endl;
  std::cout << " docs: " << fsDirExists << std::endl;

  return 0;
}