#include <cstdlib> // For system() function
#include <iostream>

int main() {
  std::system("touch output.txt");
  std::system("touch /output.txt");

  std::system("mkdir docs");
  std::system("sudo mkdir /docs");

  return 0;
}