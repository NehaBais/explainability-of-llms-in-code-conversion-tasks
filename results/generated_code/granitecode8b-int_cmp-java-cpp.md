Here's the converted code from Java to C++:
```
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
```
This code prompts the user to enter two integers, reads them from the standard input, and then uses an `if-else` statement to compare the two integers. The output message is printed using `std::cout`.
You can test the condition for each case separately by running the program and entering different integer values for `nbr1` and `nbr2`.

