#include <filesystem>
#include <iostream>
#include <string>

int main() {
  std::filesystem::path input_file = "input.txt";
  size_t size1 = std::filesystem::file_size(input_file);

  std::filesystem::path root_input_file = "/input.txt";
  size_t size2 = std::filesystem::file_size(root_input_file);

  std::cout << "The size of input.txt in the current working directory is: "
            << size1 << std::endl;
  std::cout << "The size of /input.txt in the file system root is: " << size2
            << std::endl;

  return 0;
}