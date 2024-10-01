#include <filesystem>
#include <iostream>

void createDirectories(const std::string &path) {
  std::filesystem::path fsPath(path);

  if (fsPath.exists() && !fsPath.is_directory()) {
    std::cerr << "Error: Path already exists and is not a directory." << '\n';
    return;
  }

  try {
    std::filesystem::create_directories(fsPath);
  } catch (const std::exception &e) {
    std::cerr << "Error during directory creation: " << e.what() << '\n';
    return;
  }
  std::cout << "Directories created successfully at path - " << fsPath << '\n';
}

int main() {
  createDirectories("./path/to/dir");
  return 0;
}