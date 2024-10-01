#include <cerrno>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
using namespace std;
int main() {
  struct stat st;
  if (stat("input.txt", &st) == 0) {
    cout << "Size of input.txt : " << st.st_size << " bytes\n";
  } else if (errno == ENOENT) {
    cout << "File not found!\n";
  } else {
    perror("stat failed");
  }
  if (stat("/input.txt", &st) == 0) {
    cout << "/input.txt Size : " << st.st_size << " bytes\n";
  } else if (errno == ENOENT) {
    cout << "/File not found!\n";
  } else {
    perror("stat failed");
  }
  return 0;
}