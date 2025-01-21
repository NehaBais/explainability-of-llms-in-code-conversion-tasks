#include <boost/filesystem.hpp>
#include <iostream>

int main() {
  // For current working directory
  if (boost::filesystem::exists("input.txt"))
    std::cout << "File exists in the current directory!\n";
  else
    std::cout << "File does not exist in the current directory!\n";

  if (boost::filesystem::exists("docs"))
    std::cout << "Directory exists in the current directory!\n";
  else
    std::cout << "Directory does not exist in the current directory!\n";

  // For file and directory in root of filesystem.
  if (boost::filesystem::exists("c:\\input.txt"))
    std::cout << "File exists in root directory!\n";
  else
    std::cout << "File does not exist in the root directory!\n";

  if (boost::filesystem::exists("c:\\docs"))
    std::cout << "Directory exists in root directory!\n";
  else
    std::cout << "Directory does not exist in the root directory!\n";
}