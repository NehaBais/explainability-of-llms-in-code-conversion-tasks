#include <cmath>
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <a> <b>" << std::endl;
    return 1;
  }

  int a = std::stoi(argv[1]);
  int b = std::stoi(argv[2]);

  // Rest of the code remains the same
}