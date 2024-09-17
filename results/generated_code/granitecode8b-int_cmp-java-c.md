Here's the converted code from Java to C:
```
#include 
#include 
using namespace std;
int main() {
 int nbr1, nbr2;
 
 cout << "Enter two integers: ";
 cin >> nbr1 >> nbr2;
 
 if (nbr1 < nbr2) {
 cout << nbr1 << " is less than " << nbr2 << endl;
 }
 
 if (nbr1 > nbr2) {
 cout << nbr1 << " is greater than " << nbr2 << endl;
 }
 
 if (nbr1 == nbr2) {
 cout << nbr1 << " is equal to " << nbr2 << endl;
 }
 
 return 0;
}
```
To test the condition for each case separately, we can use the following input:
- less than: -5 10
- equal to: 7 7
- greater than: 20 -10

