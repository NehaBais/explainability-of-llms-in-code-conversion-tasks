#include <experimental/filesystem>
#include <iostream>

int main() {
  std::experimental::filesystem::rename("input.txt", "output.txt");
  std::experimental::filesystem::rename("c:/input.txt", "c:/output.txt");
  std::experimental::filesystem::rename("docs", "mydocs");
  std::experimental::filesystem::rename("c:/docs", "c:/mydocs");

  return 0;
}