#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>

bool check_reg(const std::string &path) {
  struct stat sb;
  return stat(path.c_str(), &sb) == 0 && S_ISREG(sb.st_mode);
}

bool check_dir(const std::string &path) {
  struct stat sb;
  return stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main() {
  std::ifstream input("input.txt");
  std::string file = "No";
  file = (input.fail()) ? file : "Yes";
  input.close();

  std::cout << "input.txt is a regular file? " << file << std::endl;

  if (check_reg("docs")) {
    std::cout << "docs is a directory? yes" << std::endl;
  } else {
    std::cout << "docs is a directory? no" << std::endl;
  }

  file = "No";
  input.open("/docs");
  file = (!input.fail()) ? "Yes" : file;
  input.close();

  std::cout << "/docs is a directory? " << file << std::endl;
  return 0;
}