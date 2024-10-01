#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;

void createFile(const string &fn) {
  ofstream f(fn);
  if (!f.is_open()) {
    cerr << "Error creating file: " << fn << endl;
    return;
  }
  cout << "File " << fn << " created!" << endl;
  f.close();
}

void createDir(const string &dn) {
  if (!filesystem::create_directory(dn)) {
    cerr << "Error creating directory: " << dn << endl;
    return;
  }
  cout << "Directory " << dn << " created!" << endl;
}

int main() {
  createFile("input.txt");
  createFile("/input.txt");
  createDir("docs");
  createDir("/docs");

  return 0;
}