#include <filesystem>
#include <iostream>

const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";

void create(const std::string &root) {
  std::filesystem::path f_path(root);
  f_path /= FILE_NAME;

  std::filesystem::path d_path(root);
  d_path /= DIR_NAME;

  try {
        std::filesystem::create_directories(d_path));
        std::ofstream file(f_path);
        file.close();
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    exit(1);
  }
}

int main() {
  create(".");
  create("/");
  return 0;
}