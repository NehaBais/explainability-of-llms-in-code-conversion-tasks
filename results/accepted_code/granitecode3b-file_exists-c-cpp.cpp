#include
#include
#include
int main() {
  std::filesystem::path cwd = ".";
  if (std::filesystem::exists(cwd / "input.txt") &&
      std::filesystem::is_regular_file(cwd / "input.txt")) {
    std::cout << "Input file exists and is a regular file." << std::endl;
  } else {
    std::cout << "Input file does not exist or is not a regular file."
              << std::endl;
  }
  std::filesystem::path root = "/";
  if (std::filesystem::exists(root / "input.txt") &&
      std::filesystem::is_regular_file(root / "input.txt")) {
    std::cout
        << "Input file exists in the filesystem root and is a regular file."
        << std::endl;
  } else {
    std::cout << "Input file does not exist or is not a regular file in the "
                 "filesystem root."
              << std::endl;
  }
  if (std::filesystem::exists(root / "docs") &&
      std::filesystem::is_directory(root / "docs")) {
    std::cout << "Directory exists in the filesystem root and is a directory."
              << std::endl;
  } else {
    std::cout << "Directory does not exist or is not a directory in the "
                 "filesystem root."
              << std::endl;
  }
  return 0;
}