#include <cstdlib>
#include <iostream>
using namespace std;

bool renameFile(const char *oldname, const char *newname) {
  // Check if old name exists
  if (!remove(oldname))
    return false;

  // Try to create new file with the given new name
  return (rename("nonexistentfile", newname) == 0);
}

void test(const char *type, const char *oldname, const char *newname) {
  cout << "The following " << type << " called " << oldname;
  if (renameFile(oldname, newname))
    cout << " was renamed as ";
  else
    cout << " could not be renamed into ";
  cout << newname << "." << endl;
}

int main() {
  test("file", "input.txt", "output.txt");
  test("file", "nonexistentfile",
       "output.txt"); // If output.txt doesn't exist yet, this should fail
  test("directory", "docs", "mydocs");
  test("directory", "nonexistentdir",
       "mydocs"); // If mydocs does not exist yet, this should succeed
  return 0;
}