#include
#include
int main() {
  // Check for file in current working directory
  std::string files[] = {"input.txt", "docs"};
  for (const auto &file : files) {
    struct stat file_info;
    if (stat(file.c_str(), &file_info) == 0) {
      if (S_ISDIR(file_info.st_mode)) {
        std::cout << file << " is a directory" << std::endl;
      } else if (S_ISREG(file_info.st_mode)) {
        std::cout << file << " is a file" << std::endl;
      }
    } else {
      std::cerr << file << " does not exist" << std::endl;
    }
  }
  // Check for file in filesystem root
  files[0] = "/input.txt";
  files[1] = "/docs";
  for (const auto &file : files) {
    struct stat file_info;
    if (stat(file.c_str(), &file_info) == 0) {
      if (S_ISDIR(file_info.st_mode)) {
        std::cout << file << " is a directory" << std::endl;
      } else if (S_ISREG(file_info.st_mode)) {
        std::cout << file << " is a file" << std::endl;
      }
    } else {
      std::cerr << file << " does not exist" << std::endl;
    }
  }
}