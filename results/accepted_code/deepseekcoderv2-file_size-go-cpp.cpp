#include <fstream>
#include <iostream>
using namespace std;
int main() {
  string line;
  ifstream myfile("input.txt");
  if (myfile.is_open()) {
    cout << "File opened." << endl;
  } else {
    cout << "Error opening file";
  }
  return 0;
}