#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  if (argc != 3) {
    cout << "Usage: ./a.out <num1> <num2>" << endl;
    return -1;
  }
  int a = atoi(argv[1]); // convert string to int
  int b = atoi(argv[2]); // convert string to int

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int division =
      a / b; // This divides 'a' by 'b', and rounds towards negative infinity.
             // If you want it to round towards zero, you would need to write
             // some additional code to handle that case.
  int remainder =
      a % b; // The '%' operator is called the 'modulo' operator. This produces
             // the remainder after dividing 'b' into 'a'. Its sign matches the
             // sign of the first operand (i.e., 'a').

  cout << "a + b = " << sum
       << endl; // The "<<" syntax is used to output variables and strings
  cout << "a - b = " << difference << endl;
  cout << "a * b = " << product << endl;
  cout << "a / b = " << division << endl;
  cout << "a % b = " << remainder << endl;
}