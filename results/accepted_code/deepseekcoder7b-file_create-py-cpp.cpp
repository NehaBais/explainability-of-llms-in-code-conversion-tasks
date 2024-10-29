#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;
using namespace std;

void create(string directory) {
  string filename = directory + "/output.txt";
  ofstream outfile;
  outfile.open(filename,
               ios::out | ios::app); // "ios::app" flag is used to open file in
                                     // append mode (creates a new one if
                                     // doesn'<｜begin▁of▁sentence｜>t exist)
  outfile.close(); // close the file as we only want an empty file

  fs::create_directory(fs::path(directory + "/docs")); // create directory
}

int main() {
  create("."); // current directory
  create(
      "/"); // filesystem root (not recommended, it may not work in all systems)

  return 0;
}