#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  // Get two numbers from command line arguments
    int a = atoi(argv[1]));
    int b = atoi(argv[2]));

    int sum = a + b; // The result of adding 'a' and 'b' (Note: integer addition
                     // is discouraged in print statements due to confusion with
                     // string concatenation)
    int difference = a - b; // The result of subtracting 'b' from 'a'
    int product = a * b;    // The result of multiplying 'a' and 'b'

    double division = static_cast<double>(a)) / static_cast<double>(b));   // performs true division, can represent fractional results

    int remainder = a % b; // The remainder of dividing 'a' by 'b' (Note: same
                           // sign as first operand if they are different)
    cout << "a + b = " << sum << endl;
    cout << "a - b = " << difference << endl;
    cout << "a * b = " << product << endl;
    cout << "quotient of a / b = " << division
         << endl; // performs true division, can represent fractional results
    cout << "remainder of a / b = " << remainder
         << endl; // same sign as first operand if they are different

    return 0;
}