#include <iostream>
#include <limits>

int main() {
  std::cout << "Enter two integers: \n";
  int a, b;

  // read the first integer
  if (!(std::cin >> a)) {
    std::cerr << "Error reading an integer\n";
    return 1; // return with error code
  }

  // clear buffer and read the second integer
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                  '\n'); // ignore rest of line
  if (!(std::cin >> b)) {
    std::cerr << "Error reading an integer\n";
    return 1; // return with error code
  }

  // compare the two integers and print result
  if (a < b) {
    std::cout << a << " is less than " << b << '\n';
  } else if (a == b) {
    std::cout << a << " equals " << b << '\n';
  } else { // a > b
    std::cout << a << " is greater than " << b << '\n';
  }

  return 0; // return success code
}