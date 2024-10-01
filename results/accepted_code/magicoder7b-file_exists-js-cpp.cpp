#include <boost/filesystem.hpp>
#include <fstream>
#include <iostream>

int main() {
  std::ifstream myfile;

  // Checking for the file in current working directory
  if (boost::filesystem::exists("input.txt")) {
    std::cout << "File exists: input.txt\n";
  } else {
    std::cout << "File does not exist: input.txt\n";
  }

  // Checking for the file in a directory in root of filesystem
  myfile.open("c:/input.txt");
  if (!myfile) {
    std::cout << "File exists: c:/input.txt\n";
  } else {
    std::cout << "File does not exist: c:/input.txt\n";
  }

  // Checking for the directory in current working directory
  if (boost::filesystem::exists("docs")) {
    std::cout << "Directory exists: docs\n";
  } else {
    std::cout << "Directory does not exist: docs\n";
  }

  // Checking for the directory in a root of filesystem
  if (boost::filesystem::exists("c:/docs")) {
    std::cout << "Directory exists: c:/docs\n";
  } else {
    std::cout << "Directory does not exist: c:/docs\n";
  }

  return 0;
}