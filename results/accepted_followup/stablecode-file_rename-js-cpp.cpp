#include <boost/filesystem.hpp>
#include <iostream>
namespace fs = boost::filesystem;

int main() {
  // Move input.txt to output.txt
  fs::path sourceFile("input.txt");
  fs::path destFile("output.txt");
  fs::rename(sourceFile, destFile);

  return 0;
}