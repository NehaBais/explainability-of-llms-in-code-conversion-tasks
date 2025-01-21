#include <filesystem> // C++17 standard library
#include <iostream>

int main() {
  std::filesystem::path current_directory{"input.txt"};
  if (std::filesystem::exists(current_directory))
    std::cout << "File input.txt exists in the current directory." << std::endl;
  else
    std::cout << "File input.txt does not exist in the current directory."
              << std::endl;

  std::filesystem::path root_directory{
      "/input.txt"}; // Change this to "/docs" for checking docs directory
  if (std::filesystem::exists(root_directory))
    std::cout << "File /input.txt exists in the root directory." << std::endl;
  else
    std::cout << "File /input.txt does not exist in the root directory."
              << std::endl;

  return 0;
}