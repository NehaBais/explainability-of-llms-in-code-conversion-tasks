#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  // Check for file and directory in current working directory
  std::cout << (std::filesystem::exists("input.txt") ? "File exists"
                                                     : "File does not exist")
            << std::endl;
  std::cout << (std::filesystem::is_directory("docs")
                    ? "Directory exists"
                    : "Directory does not exist")
            << std::endl;

  // Check for file and directory in filesystem root (on Unix-like "/" on
  // Windows "C:\\")
#ifdef _WIN32
  const char root[] = "C:\\";
#else
  const char root[] = "/";
#endif

  std::string filePath = std::string(root) + "input.txt";
  std::string dirPath = std::string(root) + "docs";

  try {
    if (std::filesystem::exists(filePath))
      std::cout << "File exists" << std::endl;
    else
      std::cout << "File does not exist" << std::endl;

    if (std::filesystem::is_directory(dirPath))
      std::cout << "Directory exists" << std::endl;
    else
      std::cout << "Directory does not exist" << std::endl;
  } catch (const std::filesystem::filesystem_error &e) {
    // handle exception
    std::cerr << e.what() << '\n';
  }

  return 0;
}