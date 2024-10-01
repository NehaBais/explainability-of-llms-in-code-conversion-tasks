#include <fstream>
#include <iostream>
using namespace std;
void printFileSize(const string &filename) {
  if (ifstream file(filename); !file) {
    cout << "Error: could not open input.txt" << endl;
  } else {
    long long size = file.tellg();
    cout << "The size of input.txt is " << size << " bytes." << endl;
  }
}
int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}