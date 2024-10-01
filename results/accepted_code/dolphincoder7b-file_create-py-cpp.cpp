#include <fstream>
#include <iostream>
#include <sys/stat.h>

using namespace std;

void create(const string &directory) {
  ofstream output_file =
      ofstream(directory + "/output.txt"); // Opens the file in write mode
  if (!output_file.is_open()) {
    cerr << "Error: Unable to open file for writing." << endl;
    return;
  }

  mkdir((directory + "/docs").c_str(), 0755); // Creates the directory
}

int main() {
  create(".");
  create("/");

  return 0;
}