#include <cstdlib>
#include <filesystem>
#include <iostream>

void exit_err(const std::string &msg, int code) {
  std::cerr << "Error: " << msg << std::endl;
  exit(code);
}

int main() {
  try {
    auto cwd = std::filesystem::current_path();
    std::filesystem::path file(cwd / "input.txt");

    if (!std::filesystem::exists(file)) {
      throw "No file name supplied";
    }

    auto size = std::filesystem::file_size(file);
    std::cout << "Size of input.txt is " << size << " bytes\n";

  } catch (const char *msg) {
    exit_err(msg, 1);
  } catch (...) {
    exit_err("Unknown error", 2);
  }

  return 0;
}