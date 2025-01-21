#include
#include
int main() {
  struct std::filesystem::path path1 = "input.txt";
  if (std::filesystem::exists(path1)) {
    if (std::filesystem::is_directory(path1)) {
      std::cout << "The current working directory exists as a directory."
                << std::endl;
    } else {
      std::cout << "The current working directory exists with a file size of "
                << std::filesystem::file_size(path1) << " bytes." << std::endl;
    }
  } else {
    std::cout << "The current working directory does not exist." << std::endl;
  }
  struct std::filesystem::path path2 = "/input.txt";
  if (std::filesystem::exists(path2)) {
    if (std::filesystem::is_directory(path2)) {
      std::cout << "The root directory exists as a directory." << std::endl;
    } else {
      std::cout << "The root directory exists with a file size of "
                << std::filesystem::file_size(path2) << " bytes." << std::endl;
    }
  } else {
    std::cout << "The root directory does not exist." << std::endl;
  }
}