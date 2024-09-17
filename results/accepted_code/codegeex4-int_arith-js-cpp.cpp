#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
  // Check if two arguments were provided
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <a> <b>" << std::endl;
    return 1; // Return a non-zero exit code to indicate error
  }

  int a = std::stoi(argv[1]);
  int b = std::stoi(argv[2]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division =
      static_cast<double>(a) / b; // Use double for the result of division
  int remainder = a % b;

  std::cout << "a + b = " << sum << std::endl;
  std::cout << "a - b = " << difference << std::endl;
  std::cout << "a * b = " << product << std::endl;
  std::cout << "a / b = " << division
            << std::endl; // The result is floating-point
  std::cout << "a % b = " << remainder << std::endl;

  return 0;
}