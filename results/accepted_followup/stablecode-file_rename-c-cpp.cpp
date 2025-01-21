#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;

int main() {
  fs::rename("input.txt", "output.txt");
  return 0;
}