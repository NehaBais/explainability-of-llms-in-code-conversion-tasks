#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;

void createFile(const string &fn) {
  ofstream f(fn);
  if (!f.is_open()) {
    cerr << "Failed to open file " << fn << endl;
    return;
  }
  cout << "file " << fn << " created!" << endl;
  f.close();
}

void createDir(const string &dn) {
  if (!filesystem::exists(dn)) {
    filesystem::create_directory(dn);
  } else {
    cerr << "Directory " << dn << " already exists" << endl;
  }
}

int main() {
  createFile("output.txt");
  createFile("/output.txt");
  createDir("docs");
  createDir("/docs");
  return 0;
}