#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream file("input.txt");
  if (file.is_open()) {
    cout << "File size: " << file.tellg() << endl;
    file.close();
  } else {
    cerr << "Unable to open input.txt" << endl;
  }

  file.open("/input.txt", ios::in);
  if (file.is_open()) {
    cout << "File size: " << file.tellg() << endl;
    file.close();
  } else {
    cerr << "Unable to open /input.txt" << endl;
  }
  return 0;
}