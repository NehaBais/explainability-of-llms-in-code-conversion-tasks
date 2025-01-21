#include
#include
using namespace std;
int main() {
  string oldName = "input.txt";
  string newName = "output.txt";

  // Rename file
  if (rename(oldName.c_str(), newName.c_str()) != 0) {
    cout << "Error renaming file" << endl;
  } else {
    cout << "File renamed successfully" << endl;
  }

  oldName = "docs";
  newName = "mydocs";

  // Rename directory
  if (rename(oldName.c_str(), newName.c_str()) != 0) {
    cout << "Error renaming directory" << endl;
  } else {
    cout << "Directory renamed successfully" << endl;
  }

  return 0;
}