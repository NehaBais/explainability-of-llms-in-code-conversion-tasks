#include
#include
using namespace std;
void createFile(string fn) {
  ofstream f(fn);
  if (f.fail()) {
    cout << "Error creating file: " << fn << endl;
    return;
  }
  cout << "File created: " << fn << endl;
}
void createDir(string dn) {
  if (!filesystem::create_directory(dn)) {
    cout << "Error creating directory: " << dn << endl;
    return;
  }
  cout << "Directory created: " << dn << endl;
}
int main() {
  string currentWorkingDir =
      getcwd(nullptr, 0); // Get the current working directory
  createFile("input.txt");
  createFile(currentWorkingDir + "/input.txt");
  createDir("docs");
  createDir(currentWorkingDir + "/docs");
  return 0;
}