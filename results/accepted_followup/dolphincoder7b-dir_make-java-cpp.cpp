#include // Include the necessary filesystem library
#include <iostream>
namespace fs = std::filesystem;
int main() {
  try {
    if (fs::create_directories("C:/parent/test"))
      std::cout << "path successfully created";
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << '\n';
  }
}