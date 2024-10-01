#include <boost/filesystem.hpp>
#include <iostream>
#include <string>
#include <system_error>

using namespace std;
namespace fs = boost::filesystem;

int main() {
  try {
    // Renaming file "input.txt" to "output.txt" and directory "docs" to
    // "mydocs" in the current working directory
    if (!fs::rename("input.txt", "output.txt")) {
      throw system_error(errno, system_category(),
                         "Failed renaming 'input.txt' to 'output.txt'");
    }
    if (!fs::rename("docs", "mydocs")) {
      throw system_error(errno, system_category(),
                         "Failed renaming 'docs' to 'mydocs'");
    }

    // Renaming file "input.txt" to "output.txt" and directory "docs" to
    // "mydocs" in the filesystem root
    if (!fs::rename("/input.txt", "/output.txt")) {
      throw system_error(errno, system_category(),
                         "Failed renaming '/input.txt' to '/output.txt'");
    }
    if (!fs::rename("/docs", "/mydocs")) {
      throw system_error(errno, system_category(),
                         "Failed renaming '/docs' to '/mydocs'");
    }
  } catch (const system_error &e) {
    cout << "Error: " << e.what() << '\n';
  }

  return 0;
}