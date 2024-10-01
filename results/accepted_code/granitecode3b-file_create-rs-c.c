#include
#include
#include
#include
using namespace std;

int main() {
  const char *file_name = "output.txt";
  const char *dir_name = "docs";

  // Create file in current directory
  ofstream f(file_name);
  if (f.fail()) {
    cerr << "Error opening file" << endl;
    return 1;
  }

  // Create directory in filesystem root
  string dir_path = "/" + string(dir_name);
  mkdir(dir_path.c_str(), S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH, 0);

  return 0;
}