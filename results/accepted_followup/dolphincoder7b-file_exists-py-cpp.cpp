#include <boost/filesystem.hpp>
#include <fstream>
#include <iostream>
namespace fs = boost::filesystem;
int main() {
  if (fs::exists("input.txt"))
    std::cout << "Found input.txt\n";
  else
    std::cout << "Not found.\n";

  if (fs::exists("/input.txt"))
    std::cout << "Found /input.txt\n";
  else
    std::cout << "Not found.\n";

  if (fs::is_directory("docs"))
    std::cout << "Found docs directory\n";
  else
    std::cout << "Not found.\n";

  if (fs::is_directory("/docs"))
    std::cout << "Found /docs directory\n";
  else
    std::cout << "Not found.\n";
}