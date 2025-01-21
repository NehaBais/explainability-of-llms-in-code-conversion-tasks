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
    std::cout << "Input file does not exist or is not a regular file in the "
              << "root directory." << std::endl;
  } else {
    std::cout << "Input file exists and is a regular file in the root "
              << "directory." << std::endl;
  }
}