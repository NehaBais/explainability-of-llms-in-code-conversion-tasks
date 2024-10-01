#include <fstream>
#include <iostream>
#include <sys/stat.h> // for mkdir function on Unix-based systems

using namespace std;

void createFile(const string &fn) {
  ofstream f;
  f.open(fn);
  if (!f.is_open()) {
    cout << "Error: could not open file " << fn << endl;
    return;
  }
  cout << "file " << fn << " created!" << endl;
  f.close();
}

void createDir(const string &dn) {
  int res = mkdir(dn.c_str(), 0777);
  if (res != 0) {
    cout << "Error: could not create directory " << dn << endl;
    return;
  }
  cout << "directory " << dn << " created!" << endl;
}

int main() {
  createFile("input.txt");
  createFile("/input.txt");
  createDir("docs");
  createDir("/docs");
  return 0;
}