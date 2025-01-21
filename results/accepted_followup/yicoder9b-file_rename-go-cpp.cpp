#include <cstdlib> // For rename()
#include <iostream>

int main() {
  char oldName[] = "input.txt";
  char newName[] = "output.txt";

  if (rename(oldName, newName) == 0) {
    std::cout << "File renamed successfully!\n";
  } else {
    std::cout << "Failed to rename the file!\n";
  }

  return 0;
}