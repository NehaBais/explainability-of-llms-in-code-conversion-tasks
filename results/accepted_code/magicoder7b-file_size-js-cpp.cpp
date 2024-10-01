#include <iostream>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  struct stat st;

  std::string path = "input.txt"; // File in the current directory
  if (stat(path.c_str(), &st) == 0 && S_ISREG(st.st_mode)) {
    std::cout << "The size of file '" << path << "' is: " << st.st_size
              << " bytes\n";
  } else {
    std::cerr << "Could not get information about '" << path << "'\n";
  }

  path = "/input.txt"; // File in the root directory
  if (stat(path.c_str(), &st) == 0 && S_ISREG(st.st_mode)) {
    std::cout << "The size of file '" << path << "' is: " << st.st_size
              << " bytes\n";
  } else {
    std::cerr << "Could not get information about '" << path << "'\n";
  }

  return 0;
}