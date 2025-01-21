#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>

int main(void) {
  struct stat foo;
  std::string filePath = "input.txt";

  // check if file exists in current working directory
  if (stat(filePath.c_str(), &foo))) 
  {
      std::cout << "Error accessing the file." << std::endl;
      return 1;
    }

  std::cout << "Size of input.txt: " << foo.st_size << std::endl;

  // check if file exists in root directory
  filePath = "/input.txt";
  if (stat(filePath.c_str(), &foo))) 
  {
      std::cout << "Error accessing the file." << std::endl;
      return 1;
    }

  std::cout << "Size of /input.txt: " << foo.st_size << std::endl;

  return 0;
}