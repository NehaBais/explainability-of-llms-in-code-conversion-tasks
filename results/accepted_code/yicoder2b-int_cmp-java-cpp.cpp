#include <iostream>
using namespace std;

int main() {
  try {
    int nbr1, nbr2;
    cout << "Enter two integers:" << endl;
    cin >> nbr1 >> nbr2;
    if (nbr1 < nbr2)
      cout << nbr1 << " is less than " << nbr2 << endl;
    if (nbr1 > nbr2)
      cout << nbr1 << " is greater than " << nbr2 << endl;
    if (nbr1 == nbr2)
      cout << nbr1 << " is equal to " << nbr2 << endl;
  } catch (...) {
    cout << "Exception encountered!" << endl;
  }
  return 0;
}