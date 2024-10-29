#include <filesystem>
#include <iostream>

int main() {
  try {
    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("docs", "mydocs");
    // To move to root directory, you will have to provide the full path of
    // files (assuming that input.txt and docs are in the current working
    // directory) For example: If your program is running from
    // /home/user/project/, it'll be similar to this:
    std::filesystem::rename("/home/user/project/input.txt",
                            "/home/user/project/output.txt");
    std::filesystem::rename("/home/user/project/docs",
                            "/home/user/project/mydocs");
  } catch (const std::exception &e) {
    std::cerr << "File move error: " << e.what() << '\n';
  }

  return 0;
}