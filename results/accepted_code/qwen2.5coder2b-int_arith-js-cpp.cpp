#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  // Check if there are two command line arguments
  if (argc != 3) {
    cout << "Usage: " << argv[0] << " <a> <b>" << endl;
    return 1;
  }

  // Convert the command line arguments to integers
  int a = stoi(argv[1]);
  int b = stoi(argv[2]);

  // Calculate the sum, difference, product, quotient, and remainder
  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division =
      static_cast<double>(a) /
      b; // Use double for division to handle decimal results properly
  int remainder = a % b;

  // Output the results
  cout << "a + b = " << sum << endl;
  cout << "a - b = " << difference << endl;
  cout << "a * b = " << product << endl;
  cout << "a / b = " << division << endl; // Print as a double for precision
  cout << "a % b = " << remainder << endl;

  return 0;
}