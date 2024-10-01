#include <fstream>
#include <iostream>
using namespace std;

void createFile(const string &fn) {
  ofstream f(fn, ios::out | ios::trunc); // open for writing with truncation
                                         // (creating if necessary)
  if (!f.good())
    cout << "Error creating file: " << fn << endl;
  else {
    cout << "File " << fn << " created!" << endl;
    f.close(); // close the stream, so that it flushes the buffer and doesn't
               // have to be reopened with each write
  }
}

void createDir(const string &dn) {
  if (mkdir(dn.c_str(), 0755) == 0) // mkdir returns 0 on success
    cout << "Directory " << dn << " created!" << endl;
  else
    cout << "Error creating directory: " << dn << endl;
}

int main() {
  createFile("input.txt");    // create file in current working directory
  createDir("docs");          // create directory in current working directory
  createFile("/newfile.txt"); // create file in root filesystem
  createDir("/newdir");       // create directory in root filesystem
}