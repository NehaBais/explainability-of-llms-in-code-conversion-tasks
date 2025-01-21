#include <filesystem>
#include <iostream>

int main() {
  try {
    std::filesystem::create_directories("./path/to/dir");
  } catch (const std::exception &e) {
    std::cerr << "An Error Occured: " << e.what() << '\n';
    return 1;
  }
  return 0;
}