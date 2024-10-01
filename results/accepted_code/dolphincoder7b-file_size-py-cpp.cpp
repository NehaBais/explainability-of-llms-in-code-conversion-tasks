#include <cstdlib>
#include <iostream>
#include <sys/stat.h>

using namespace std;

int main() {
  struct stat fileInfo;

  if (stat("input.txt", &fileInfo) != 0) {
    cout << "Cannot access input.txt: " << strerror(errno);
    exit(-1);
  }

  size_t size = fileInfo.st_size;
  cout << "Size of input.txt is : " << size << " bytes." << endl;

  if (stat("/input.txt", &fileInfo) != 0) {
    cout << "Cannot access /input.txt: " << strerror(errno);
    exit(-1);
  }

  size = fileInfo.st_size;
  cout << "Size of /input.txt is : " << size << " bytes." << endl;

  return 0;
}