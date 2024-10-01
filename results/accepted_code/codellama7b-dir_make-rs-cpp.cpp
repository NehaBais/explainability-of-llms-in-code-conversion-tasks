#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;

int main() {
  char path[256] = "./path/to/dir";
  if (mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) < 0) {
    perror("Failed to create directory");
    return EXIT_FAILURE;
  }
  cout << "Directory created successfully!" << endl;
  return EXIT_SUCCESS;
}