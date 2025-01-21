#include
#include
#include
using namespace std;
bool renameFile(const string &oldname, const string &newname) {
  FILE *file = fopen(oldname.c_str(), "r");
  if (!file) {
    return false;
  }
  fclose(file);
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
       << " was renamed to " << newname << "." << endl;
}
int main() {
  test("file", "input.txt", "output.txt");
  test("directory", "docs", "mydocs");
  return 0;
}