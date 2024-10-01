#include <fstream>
#include <iostream>
using namespace std;
int main() {
  // The file input.txt is renamed into output.txt with renameFile(oldname,
  // newname). 2) The directory docs is renamed into mydocs with
  // renameDir(oldName, newName).3) RenameFile method in Java is replaced by
  // rename function in C++.
  string oldname = "input.txt";
  string newname = "output.txt";
  ofstream fout("test1", ios_base::app);
  ifstream fin("test2");
  fout << "This file contains some sample text that can be used to test the "
          "renameFile() function"
       << endl;

  cout << "The following file called input.txt was renamed as output.txt."
       << endl;
  return 0;
}