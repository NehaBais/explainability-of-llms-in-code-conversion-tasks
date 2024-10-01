#include <cstdlib> // for std::system() and exit()
#include <iostream>
#include <sys/stat.h>
#include <unistd.h> // for access() function

using namespace std;

bool fileExists(string path) {
  struct stat buffer;
  return (stat(path.c_str(), &buffer) == 0);
}

int main() {
  if (!fileExists("input.txt")) {
    cout << "input.txt does not exist" << endl;
    exit(1);
  } else {
    cout << "input.txt exists" << endl;
  }

  if (!fileExists("/input.txt")) {
    cout << "/input.txt does not exist" << endl;
    exit(1);
  } else {
    cout << "/input.txt exists" << endl;
  }

  if (!fileExists("docs")) {
    cout << "docs does not exist" << endl;
    exit(1);
  } else {
    cout << "docs exists" << endl;
  }

  if (!fileExists("/docs")) {
    cout << "/docs does not exist" << endl;
    exit(1);
  } else {
    cout << "/docs exists" << endl;
  }

  return 0;
}