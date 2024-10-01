#include <filesystem>
#include <iostream>

int main() {
  try {
    std::filesystem::path p("C:/parent/test");
    if (std::filesystem::create_directories(p))
      std::cout << "Path successfully created" << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}