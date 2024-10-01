#include <filesystem>
#include <iostream>

using namespace std;

int main() {
  filesystem::path pathA("file.txt");
  cout << "Size of file.txt in current working directory: "
       << filesystem::file_size(pathA) << " B" << endl;

  filesystem::path pathB("/file.txt");
  cout << "Size of file.txt in root directory: " << filesystem::file_size(pathB)
       << " B" << endl;

  return 0;
}