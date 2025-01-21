#include
#include
#include
int main() {
  std::filesystem::path path1 = "input.txt";
  if (std::filesystem::exists(path1)) {
    if (std::filesystem::is_directory(path1)) {
      std::cout << path1 << " is a directory" << std::endl;
    } else {
      std::cout << path1 << " is a file" << std::endl;
    }
  } else {
    std::cout << path1 << " does not exist" << std::endl;
  }

  std::filesystem::path path2 = "/input.txt";
  if (std::filesystem::exists(path2)) {
    if (std::filesystem::is_directory(path2)) {
      std::cout << path2 << " is a directory" << std::endl;
    } else {
      std::cout << path2 << " is a file" << std::endl;
    }
  } else {
    std::cout << path2 << " does not exist" << std::endl;
  }
}