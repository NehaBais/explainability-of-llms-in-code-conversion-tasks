#include <filesystem>
#include <iostream>
int main() {
  std::filesystem::create_directories("../test_mkdir");
  return 0;
}