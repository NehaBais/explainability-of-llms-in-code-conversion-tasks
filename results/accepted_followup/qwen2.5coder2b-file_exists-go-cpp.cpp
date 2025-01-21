#include <filesystem>
#include <iostream>

using namespace std;
using namespace filesystem;

void printStat(string p) {
  if (exists(p)) {
    if (is_directory(p))
      cout << p << " is a directory" << endl;
    else
      cout << p << " is a file" << endl;
  } else {
    cout << "Error: Cannot find " << p << endl;
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
}