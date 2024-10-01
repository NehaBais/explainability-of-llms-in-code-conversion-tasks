#include <cstdio>
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;

int main() {
  // Check for regular file in current working directory
  struct stat sb;
  if (stat("input.txt", &sb) == 0 && S_ISREG(sb.st_mode)) {
    cout << "input.txt is a regular file" << endl;
  } else {
    cout << "input.txt is not a regular file" << endl;
  }

  // Check for directory in current working directory
  if (stat("docs", &sb) == 0 && S_ISDIR(sb.st_mode)) {
    cout << "docs is a directory" << endl;
  } else {
    cout << "docs is not a directory" << endl;
  }

  // Check for regular file in filesystem root
  if (stat("/input.txt", &sb) == 0 && S_ISREG(sb.st_mode)) {
    cout << "/input.txt is a regular file" << endl;
  } else {
    cout << "/input.txt is not a regular file" << endl;
  }

  // Check for directory in filesystem root
  if (stat("/docs", &sb) == 0 && S_ISDIR(sb.st_mode)) {
    cout << "/docs is a directory" << endl;
  } else {
    cout << "/docs is not a directory" << endl;
  }

  return 0;
}