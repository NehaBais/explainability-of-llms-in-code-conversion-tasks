#include <filesystem>
#include <fstream>

int main() {
  std::ofstream outfile1("output.txt"); // opens file in current directory
  if (outfile1) {
    outfile1.close(); // close the file as we don't need to write anything here,
                      // just create an empty file
  }

  std::filesystem::create_directory(
      "docs"); // creates a "docs" folder in current directory

  /* filesystem root varies by operating system
     For Windows it's C:\, for Linux /root */

  return 0;
}