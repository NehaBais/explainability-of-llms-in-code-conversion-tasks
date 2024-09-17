#include <iostream>
#include <string>
using namespace std;
int main() {
  int nbr1, nbr2;
  cin >> nbr1 >> nbr2;
  if (nbr1 < nbr2)
    cout << nbr1 << " is less than " << nbr2 << endl;
  else if (nbr1 == nbr2)
    cout << nbr1 << " is equal to " << nbr2 << endl;
  else if (nbr1 > nbr2)
    cout << nbr1 << " is greater than " << nbr2 << endl;
}