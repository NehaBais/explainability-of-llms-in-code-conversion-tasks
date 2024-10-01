#include
#include
int main() {
  std::filesystem::path cwd = std::filesystem::current_path();
  std::filesystem::path inputFile = "input.txt";

  if (std::filesystem::exists(cwd / inputFile)) {
    std::cout << "The current working directory exists." << std::endl;
  } else {
    std::cout << "The current working directory does not exist." << std::endl;
  }

  std::filesystem::path rootPath = "/";
  std::filesystem::path docsPath = "docs/";
  inputFile = "input.txt";

  if (std::filesystem::exists(rootPath / docsPath / inputFile)) {
    std::cout << "The filesystem root exists." << std::endl;
  } else {
    std::cout << "The filesystem root does not exist." << std::endl;
  }

  return 0;
}