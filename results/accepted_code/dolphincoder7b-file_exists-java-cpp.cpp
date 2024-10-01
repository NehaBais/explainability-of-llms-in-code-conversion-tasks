#include <fstream>
#include <iostream>

using namespace std;

int main() {
  // Check if docs/input.txt exists
  ifstream file_exists("docs/input.txt");

  if (file_exists) {
    cout << "The file 'docs/input.txt' exists." << endl;
  } else {
    cout << "The file 'docs/input.txt' does not exist." << endl;
  }

  // Check if /docs/input.txt exists
  ifstream root_file_exists("/docs/input.txt");

  if (root_file_exists) {
    cout << "The file '/docs/input.txt' exists." << endl;
  } else {
    cout << "The file '/docs/input.txt' does not exist." << endl;
  }

  return 0;
}