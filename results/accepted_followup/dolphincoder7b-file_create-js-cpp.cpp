#include <filesystem> // Include the required header file
int main() {
  std::error_code err;

  // ...

  std::filesystem::create_directory(
      "docs", err); // Replace `std::filesystem` with `std::filesystem::path`
  if (err) {
    std::cerr << "Error creating directory 'docs'." << std::endl;
    return -1;
  }
}