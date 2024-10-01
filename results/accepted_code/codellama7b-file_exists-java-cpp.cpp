#include <fstream>
#include <iostream>
using namespace std;

int main() {
  // Check if input.txt exists in the current working directory
  ifstream inputFile("input.txt");
  if (!inputFile) {
    cout << "Input file does not exist." << endl;
  } else {
    cout << "Input file exists." << endl;
  }

  // Check if input.txt exists in the root directory of the file system
  ifstream rootFile("/input.txt");
  if (!rootFile) {
    cout << "Root file does not exist." << endl;
  } else {
    cout << "Root file exists." << endl;
  }

  return 0;
}