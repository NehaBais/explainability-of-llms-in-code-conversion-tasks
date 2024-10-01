#include <cstdlib>
#include <iostream>
#include <sys/stat.h>
using namespace std;

int main() {
  struct stat foo;
  stat("input.txt",
       &foo); // check the size of the file in the current working directory
  cout << "Size of input.txt: " << foo.st_size << endl;
  stat("/input.txt", &foo); // check the size of the file in the root directory
  cout << "Size of /input.txt: " << foo.st_size << endl;
  return 0;
}