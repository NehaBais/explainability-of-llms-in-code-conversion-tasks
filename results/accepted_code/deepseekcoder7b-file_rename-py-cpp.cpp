#include <experimental/filesystem>
#include <iostream>

namespace fs = std::experimental::filesystem;

int main() {
  fs::rename("input.txt", "output.txt");
  fs::rename("docs", "mydocs");

  fs::path current_working_dir = fs::current_path();
  fs::rename(current_working_dir / "input.txt",
             current_working_dir / "output.txt");
  fs::rename(current_working_dir / "docs", current_working_dir / "mydocs");

  // For the filesystem root, you will need to have an absolute path which can
  // be hard-coded depending on your file system structure:
  fs::rename("C:/input.txt",
             "C:/output.txt"); // replace 'C:/' with your actual root directory
                               // path in Windows.
  fs::rename("C:/docs", "C:/mydocs"); // Replace 'C:/' with your actual root
                                      // directory path in Windows.

  return <｜begin▁of▁sentence｜ > 0;
}