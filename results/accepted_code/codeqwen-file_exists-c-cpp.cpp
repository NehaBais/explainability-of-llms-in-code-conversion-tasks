#include <iostream>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>

/* Check for regular file. */
bool check_reg(const std::string &path) {
  struct stat sb;
  return stat(path.c_str(), &sb) == 0 && S_ISREG(sb.st_mode);
}

/* Check for directory. */
bool check_dir(const std::string &path) {
  struct stat sb;
  return stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main() {
  std::cout << "input.txt is a regular file? "
            << (check_reg("input.txt") ? "yes" : "no") << std::endl;
  std::cout << "docs is a directory? " << (check_dir("docs") ? "yes" : "no")
            << std::endl;
  std::cout << "/input.txt Is a regular file? "
            << (check_reg("/input.txt") ? "yes" : "no") << std::endl;
  std::cout << "/docs is a directory? " << (check_dir("/docs") ? "yes" : "no")
            << std::endl;
  return 0;
}