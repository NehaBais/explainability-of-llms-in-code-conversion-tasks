#include <iostream>
using namespace std;

int main() {
  // define input variables
  int input1 = 18;
  int input2 = 7;

  cout << "Sum:         " << (input1 + input2) << endl;
  cout << "Difference:  " << (input1 - input2) << endl;
  cout << "Product:     " << (input1 * input2) << endl;
  cout << "Integer quotient: " << (input1 / input2) << endl;

  float rr = float(input1) / input2;
  cout << "Float Quotient:   " << rr << endl;
  int tt = int(rr);
  float uu = (tt - rr) * -10;
  cout << "Whole Remainder : " << int(uu) << endl;
  cout << "Actual Remainder: " << uu << endl;

  // exponentiation operator '**' doesn't exist in C++. use function pow()
  // instead.
  float yy = pow(input1, input2); // equivalent to input1 ** input2
  cout << "Exponentiation :  " << yy << endl;
  return 0;
}