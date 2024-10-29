#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;

int main() {
  for (auto &p :
       std::vector<std::string>{"input.txt", "docs", "/input.txt", "/docs"}) {
    if (fs::exists(p)) {
      if (fs::is_directory(p)) {
        std::cout << p << " is a directory\n";
      } else {
        std::cout << p << " is a file\n";
      }
    } else {
      std::cout << p << " does not exist\n";
    }
  }
}