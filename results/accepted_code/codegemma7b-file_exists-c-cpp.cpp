#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

// Check for regular file.
bool check_reg(const std::string &path) {
  struct stat sb;
  return stat(path.c_str(), &sb) == 0 && S_ISREG(sb.st_mode);
}

// Check for directory.
bool check_dir(const std::string &path) {
  struct stat sb;
  return stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main() {
  // Current working directory
  std::string cwd = ".";
  printf("input.txt is a regular file? %s\n",
         check_reg(cwd + "/input.txt") ? "yes" : "no");
  printf("docs is a directory? %s\n", check_dir(cwd + "/docs") ? "yes" : "no");

  // File and directory in filesystem root
  std::string root = "/";
  printf("/input.txt is a regular file? %s\n",
         check_reg(root + "/input.txt") ? "yes" : "no");
  printf("/docs is a directory? %s\n",
         check_dir(root + "/docs") ? "yes" : "no");
  return 0;
}