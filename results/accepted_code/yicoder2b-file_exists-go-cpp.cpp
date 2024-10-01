#include <dirent.h>
#include <iostream>
#include <sys/stat.h>
using namespace std;
void printStat(const char *p) {
  struct stat st;
  if (stat(p, &st) == -1) {
    cout << "Error occurred while getting the information of '" << p << "'.\n";
    return;
  }

  if (S_ISDIR(st.st_mode)) {
    cout << p << " is a directory.\n";
  } else {
    cout << p << " is not a directory, it's a file.\n";
  }
}
int main() {
  printStat("input.txt");
  printStat("/input.txt"); // Note: this should not work as '/' is the root of
                           // the filesystem in Linux systems.
  printStat("docs");
  printStat("/docs"); // Note: this should not work as '/docs' is the root of
                      // the filesystem in Linux systems.
}