#include
#include
#include
using namespace std;
void exit_err(string msg, int code) {
  cerr << "Error: " << msg << endl;
  exit(code);
}
int main() {
  string file_name = argv[1];
  ifstream file(file_name);
  if (!file) {
    exit_err("Could not open file", 2);
  }
  file.seekg(0, ios::end);
  int size = file.tellg();
  cout << "Size of " << file_name << " is " << size << " bytes" << endl;
  string root_file_name = "/input.txt";
  ifstream root_file(root_file_name);
  if (!root_file) {
    exit_err("Could not open root file", 2);
  }
  root_file.seekg(0, ios::end);
  int root_size = root_file.tellg();
  cout << "Size of /input.txt is " << root_size << " bytes" << endl;
  return 0;
}