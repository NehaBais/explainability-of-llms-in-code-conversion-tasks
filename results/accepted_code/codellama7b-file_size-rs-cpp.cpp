#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
class FileSize {
public:
  string file_name;
  fstream fs;
  int len;
  char c;
  bool success;
  string err;
  void set_file_name(string name) { file_name = name; }
  void get_file_size() {
    fs.open(file_name);
    if (!fs.is_open()) {
      err += "Failed to open file.";
      success = false;
      return;
    }
    len = fs.tellg();
  }
};
int main() {
  FileSize input{};
  string line;
  vector<string> args = {"input.txt"};
  ifstream in(args[0]);
  while (getline(in, line)) {
    cout << "Line from file: " << line << endl;
  }
  return 0;
}