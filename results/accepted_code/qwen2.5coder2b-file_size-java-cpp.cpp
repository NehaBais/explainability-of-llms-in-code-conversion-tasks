#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Create a File object pointing to the current directory's file.txt
  ifstream fileA("file.txt");

  if (!fileA.is_open()) {
    cout << "Error opening input.txt. Exiting program.";
    return 1;
  }

  int length = fileA.tellg();
  cout << "The size of file.txt is " << length << " bytes." << endl;

  // Create a File object pointing to the root directory's file.txt
  ifstream fileB("/file.txt");

  if (!fileB.is_open()) {
    cout << "Error opening /file.txt. Exiting program.";
    return 1;
  }

  length = fileB.tellg();
  cout << "The size of /file.txt is " << length << " bytes." << endl;

  return 0;
}