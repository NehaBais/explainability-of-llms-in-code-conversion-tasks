#include <cstdlib> // for system function
#include <fstream>
#include <iostream>
#include <sstream>

void createFile(const std::string &fn) {
  std::ofstream f(fn);
  if (!f.is_open()) {
    std::cerr << "Failed to open file: " << fn << '\n';
    return;
  }
  std::cout << "File '" << fn << "' created!" << std::endl;
}

void createDir(const std::string &dn) {
  std::ostringstream cmd;
  cmd << "mkdir -p " << dn;
  int r = std::system(cmd.str().c_str());
  if (r != 0) {
    std::cerr << "Failed to create directory: " << dn << '\n';
    return;
  }
  std::cout << "Directory '" << dn << "' created!" << std::endl;
}

int main() {
  createFile("input.txt");
  createDir("docs");
  createDir("/docs");
  return 0;
}