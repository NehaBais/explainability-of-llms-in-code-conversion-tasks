#include <fstream>
#include <iostream>
#include <string>
using namespace std;
typedef string String;
typedef ifstream InFileStream;
int main() {
  // Read input from file and store it in a vector
  Vector<String> lines;
  InFileStream infile("input.txt");
  int lineNo = 0;
  while (infile) {
    getline(infile, line);
    if (!infile)
      break;
    // Process the current line here as required by problem specs
  }
  cout << "Finished processing lines." << endl;
  return 0;
}