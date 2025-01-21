#include <iostream> // for input/output operations

// Function to compare two integers
bool compare(int a, int b) {
  if (a == b) {
    std::cout << a << " equals " << b;
    return true;
  } else if (a < b) {
    std::cout << a << " is less than " << b;
    return true;
  } else if (a > b) {
    std::cout << a << " is greater than " << b;
    return true;
  } else {
    return false; // no equality condition met
  }
}

int main() {
  int a, b;
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;

  if (compare(a, b)) {
    std::cout << "\n"; // print newline after comparison
  } else {
    std::cerr << "Error: Values entered are not of the same type.\n";
  }

  return 0;
}