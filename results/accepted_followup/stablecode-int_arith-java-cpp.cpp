#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  // Get two numbers from command line arguments
    int a = atoi(argv[1]));
    int b = atoi(argv[2]));

    int sum = a + b;
    int difference = a - b;
    int product = a * b;

    double division = static_cast<double>(a)) / static_cast<double>(b));   // performs true division, can represent fractional results
    int remainder = a % b; // same sign as first operand if they are different

    cout << "a + b = " << sum << endl;
    cout << "a - b = " << difference << endl;
    cout << "a * b = " << product << endl;
    cout << "quotient of a / b = " << division << endl;
    cout << "remainder of a / b = " << remainder << endl;

    return 0;
}