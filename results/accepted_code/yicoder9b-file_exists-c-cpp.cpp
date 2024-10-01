#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/* Check for regular file. */
bool check_reg(const char *path) {
  struct stat sb;
  return stat(path, &sb) == 0 && S_ISREG(sb.st_mode);
}

/* Check for directory. */
bool check_dir(const char *path) {
  struct stat sb;
  return stat(path, &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main() {
  std::cout << "input.txt is a regular file? "
            << (check_reg("input.txt") ? "yes\n" : "no\n");
  std::cout << "docs is a directory? "
            << (check_dir("docs") ? "yes\n" : "no\n");
  std::cout << "/input.txt is a regular file? "
            << (check_reg("/input.txt") ? "yes\n" : "no\n");
  std::cout << "/docs is a directory? "
            << (check_dir("/docs") ? "yes\n" : "no\n");
  return 0;
}