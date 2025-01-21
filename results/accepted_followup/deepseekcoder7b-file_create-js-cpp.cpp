#include <boost/filesystem.hpp>
namespace fs = boost::filesystem;

int main() {
  fs::ofstream outfile1("output.txt"); // opens file in current directory
  if (outfile1) {
    outfile1.close(); // close the file as we don'<｜begin▁of▁sentence｜> need
                      // to write anything here, just create an empty file
  }

  fs::create_directory("docs"); // creates a "docs" folder in current directory
}