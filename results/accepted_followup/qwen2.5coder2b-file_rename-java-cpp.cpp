#include <filesystem>
#include <iostream>

using namespace std;
using namespace filesystem;

bool renameFile(string oldname, string newname) {
  // Open the file for reading and writing
  ifstream in(oldname);
  ofstream out(newname);

  if (!in || !out) {
    return false; // Return false if either file cannot be opened
  }

  // Copy the contents of the input file to the output file
  copy(in.rdbuf(), out.rdbuf());

  // Close both files
  in.close();
  out.close();

  // Delete the old file and rename the new one
  remove(oldname);
  rename(newname, oldname);

  return true; // Return true if the renaming was successful
}

void test(string type, string oldname, string newname) {
  cout << "The following " << type << " called " << oldname
       << (renameFile(oldname, newname) ? " was renamed as "
                                        : " could not be renamed into ")
       << newname << "." << endl;
}

int main() {
  test("file", "input.txt", "output.txt");
  test("file", current_path() / "input.txt", current_path() / "output.txt");
  test("directory", "docs", "mydocs");
  test("directory", current_path() / "docs" / "",
       current_path() / "mydocs" / "");

  return 0;
}