#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;
using namespace std;

void create(string directory) {
  string filename = directory + "/output.txt";
  ofstream outfile;
  outfile.open(filename, ios::out | ios::app);
  outfile.close();

  fs::create_directory(fs::path(directory + "/docs"));
}

int main() {
  create(".");
  // create("/"); This will not work in all systems, because it requires
  // elevated privileges or changes in the operating system settings.
  return <｜begin▁of▁sentence｜ > 0;
}