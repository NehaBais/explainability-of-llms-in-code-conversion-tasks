#include <fstream>
#include <iostream>
int main() {
  std::ifstream inputFile("input.txt");
  if (inputFile)
    std::cout << "File exists" << '\n';
  else
    std::cout << "File does not exist" << '\n';

  std::ifstream fileA("file.txt");
  std::cout << "Length of file: " << fileA.tellg() << " bytes\n";

  std::ifstream fileB("/file.txt");
  std::cout << "Length of file: " << fileB.tellg() << " bytes\n";

  return 0;
}