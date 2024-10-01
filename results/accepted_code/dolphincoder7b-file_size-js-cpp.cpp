#include <fstream>
#include <iostream>
using namespace std;

int main() {
  // Opening and checking the size of the file in the current working directory
  ifstream input("input.txt");
  cout << "Size of input.txt in the current working directory: ";
  cout << input.tellg() << " bytes\n";

  // Opening and checking the size of the file in the root of the file system
  ifstream input2("/input.txt");
  cout << "Size of input.txt in the root of the file system: ";
  cout << input2.tellg() << " bytes\n";
  return 0;
}