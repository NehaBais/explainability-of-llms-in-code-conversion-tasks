#include
#include
using namespace std;
void createFile(string fn) {
  ofstream f(fn);
  if (f.fail()) {
    cout << "Error creating file: " << fn << endl;
    return;
  }
  f.close(); // Close the file after writing
}
void createDir(string dn) {
  filesystem::path p(dn);
  if (filesystem::exists(p)) {
    cout << "Directory already exists" << endl;
    return;
  }
  filesystem::create_directory(p);
}
int main() {
  string currentWorkingDir =
      get_current_dir_name(); // Get the current working directory
  createFile("input.txt");
  createDir("docs");
  return 0;
}