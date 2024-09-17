#include <iostream>
#include <string>

int main() {
  int nbr1;
  int nbr2;

  std::cout << "Enter first integer: ";
  std::cin >> nbr1;

  if (!std::cin) // Checking for any error in input.
  {
    std::cerr << "Invalid Input!";
    return -1;
  }

  std::cout << "Enter second integer: ";
  std::cin >> nbr2;

  if (!std::cin) // Checking for any error in input.
  {
    std::cerr << "Invalid Input!";
    return -1;
  }

  if (nbr1 < nbr2)
    std::cout << nbr1 << " is less than " << nbr2 << std::endl;

  if (nbr1 > nbr2)
    std::cout << nbr1 << " is greater than " << nbr2 << std::endl;

  if (nbr1 == nbr2)
    std::cout << nbr1 << " is equal to " << nbr2 << std::endl;

  return 0; // return statement for the main function.
}