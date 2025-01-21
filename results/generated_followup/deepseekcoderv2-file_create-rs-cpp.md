 ```cpp
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib> // For std::exit

const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";

void create(const std::string &root) {
  try {
    auto f_path = std::filesystem::path(root) / FILE_NAME;
    auto d_path = std::filesystem::path(root) / DIR_NAME;

    if (!std::filesystem::is_directory(d_path)) {
      std::filesystem::create_directory(d_path);
    }

    std::ofstream file(f_path, std::ios::trunc);
    if (file) {
      file.close();
    } else {
      throw std::runtime_error("Failed to create file: " + f_path.string());
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    std::exit(1);
  }
}

int main() {
  create(".");
  create("/");
  return 0;
}
```
