#include
int main() {
  std::string files[] = {"input.txt", "docs"};
  for (const auto &file : files) {
    struct stat file_info;
    if (stat(file.c_str(), &file_info) == 0) {
      std::cout << file << " is a directory" << std::endl;
    } else if (errno == ENOENT) {
      std::cerr << file << " does not exist" << std::endl;
    } else {
      std::cerr << file << " is neither a file nor a directory" << std::endl;
    }
  }
  return 0;
}