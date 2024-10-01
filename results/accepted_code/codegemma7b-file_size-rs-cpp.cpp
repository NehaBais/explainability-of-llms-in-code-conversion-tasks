#include <cstdlib>
#include <filesystem>
#include <iostream>

using namespace std;

int main() {
  string file_name = "";
  if (argc < 2) {
    cerr << "Error: No file name supplied" << endl;
    exit(1);
  } else {
    file_name = argv[1];
  }

  try {
    filesystem::path path(file_name);
    cout << "Size of " << path.filename() << " is " << path.file_size()
         << " bytes" << endl;
  } catch (const filesystem::filesystem_error &e) {
    cerr << "Error: " << e.what() << endl;
    exit(2);
  }

  return 0;
}