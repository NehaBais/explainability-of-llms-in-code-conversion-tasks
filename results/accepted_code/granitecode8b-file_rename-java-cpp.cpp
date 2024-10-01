#include
#include
using namespace std;
bool renameFile(const string &oldname, const string &newname) {
  // File (or directory) with old name
  FILE *file = fopen(oldname.c_str(), "r");
  if (!file) {
    return false;
  }
  fclose(file);
  // File (or directory) with new name
  FILE *file2 = fopen(newname.c_str(), "r");
  if (file2) {
    fclose(file2);
    remove(newname.c_str());
  }
  int result = rename(oldname.c_str(), newname.c_str());
  return (result == 0);
}
void test(const string &type, const string &oldname, const string &newname) {
  cout << "The following " << type << " called " << oldname
       << (renameFile(oldname, newname) ? " was renamed as "
                                        : " could not be renamed into ")
       << newname << "." << endl;
}
int main() {
  test("file", "input.txt", "output.txt");
  test("file", "/" + string("input.txt"), "/" + string("output.txt"));
  test("directory", "docs", "mydocs");
  test("directory", "/" + string("docs") + "/", "/" + string("mydocs") + "/");
  return 0;
}