#include <filesystem>
#include <iostream>

void moveFile(const std::string &from, const std::string &to) {
  try {
    std::filesystem::rename(from, to);
    std::cout << "Moved file from " << from << " to " << to << '\n';
  } catch (std::exception &e) {
    std::cerr << "Failed to move file: " << e.what() << '\n';
  }
}

void moveFolder(const std::string &from, const std::string &to) {
  try {
    std::filesystem::rename(from, to);
    std::cout << "Moved folder from " << from << " to " << to << '\n';
  } catch (std::exception &e) {
    std::cerr << "Failed to move folder: " << e.what() << '\n';
  }
}

int main() {
  moveFile("input.txt", "output.txt");
  moveFile("c:/input.txt", "c:/output.txt");

  moveFolder("docs", "mydocs");
  moveFolder("c:/docs", "c:/mydocs");

  return 0;
}