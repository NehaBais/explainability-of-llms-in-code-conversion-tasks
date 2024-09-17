int main() {
  int nbr1, nbr2;           // Declare variables
  std::cin >> nbr1 >> nbr2; // Read input

  if (nbr1 < nbr2)
    std::cout << nbr1 << " is less than " << nbr2 << "\n";

  if (nbr1 > nbr2)
    std::cout << nbr1 << " is greater than " << nbr2 << "\n";

  if (nbr1 == nbr2)
    std::cout << nbr1 << " is equal to " << nbr2 << "\n";

  return 0; // Exit successfully
}