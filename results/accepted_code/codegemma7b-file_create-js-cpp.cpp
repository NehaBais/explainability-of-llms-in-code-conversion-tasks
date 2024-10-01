#include <filesystem>
#include <iostream>

int main() {
  try {
    std::filesystem::create_directory("docs");
    std::filesystem::create_directory("/docs");

    std::ofstream output("output.txt");
    std::ofstream output_root("/output.txt");

    output.close();
    output_root.close();
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}