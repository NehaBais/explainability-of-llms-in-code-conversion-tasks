#include <filesystem>
#include <fstream>
#include <iostream>
#include <system_error>

using namespace std;

const string FILE_NAME = "output.txt";
const string DIR_NAME = "docs";

int main() {
  try {
    // Create file
    ofstream f(FILE_NAME);
    if (!f.is_open()) {
      cerr << "Error: Could not open output.txt" << endl;
      return 1;
    }
    f.close();

    // Create directory
    filesystem::create_directory(DIR_NAME);

    cout << "Files and directories created successfully." << endl;

  } catch (const exception &e) {
    cerr << "Error: " << e.what() << endl;
    return 1;
  }

  return 0;
}