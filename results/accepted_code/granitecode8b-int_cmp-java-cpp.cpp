#include
#include
int main() {
  int nbr1, nbr2;
  std::cin >> nbr1 >> nbr2;
  if (nbr1 < nbr2) {
    std::cout << nbr1 << " is less than " << nbr2 << std::endl;
  } else if (nbr1 > nbr2) {
    std::cout << nbr1 << " is greater than " << nbr2 << std::endl;
  } else {
    std::cout << nbr1 << " is equal to " << nbr2 << std::endl;
  }
  return 0;
}