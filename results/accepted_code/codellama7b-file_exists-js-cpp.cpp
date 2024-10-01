#include <filesystem>
#include <iostream>

using namespace std;

int main() {
  filesystem::path input_txt("input.txt");
  if (filesystem::exists(input_txt)) {
    cout << "File exists!" << endl;
  } else {
    cout << "File does not exist." << endl;
  }

  filesystem::path c_docs("c:/docs");
  if (filesystem::exists(c_docs)) {
    cout << "Folder exists!" << endl;
  } else {
    cout << "Folder does not exist." << endl;
  }
}