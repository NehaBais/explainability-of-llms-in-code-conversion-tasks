#include <experimental/filesystem>
#include <iostream>

int main() {
  try {
    std::experimental::filesystem::rename("input.txt", "output.txt");
    std::experimental::filesystem::rename("docs", "mydocs");
    // For moving files to root directory, you need full path of the file.
    // Assume current working directory is /home/user/project and running
    // program from there:
    std::experimental::filesystem::rename("/home/user/project/input.txt",
                                          "/home/user/project/output.txt");
    std::experimental::filesystem::rename("/home/user/project/docs",
                                          "/home/user/project/mydocs");
  } catch (const std::exception &e) {
    std::cerr << "File move error: " << e.what() << '\n';
  }
  return <｜begin▁of▁sentence｜ > 0;
}