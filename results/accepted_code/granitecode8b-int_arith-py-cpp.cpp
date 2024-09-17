#include
using namespace std;
int main() {
  int input1, input2;
  cout << "Enter first integer: ";
  cin >> input1;
  cout << "Enter second integer: ";
  cin >> input2;

  int qq = input1 + input2;
  cout << "Sum: 		  " << qq << endl;

  int ww = input1 - input2;
  cout << "Difference: 	  " << ww << endl;

  int ee = input1 * input2;
  cout << "Product: 	  " << ee << endl;

  double rr =
      static_cast(input1) /
      static_cast(input2); // integer quotient, rounded towards zero by default
  cout << "Integer quotient: " << static_cast(rr) << endl;
  cout << "Float quotient:   " << rr << endl;

  int tt =
      static_cast(input1) %
      static_cast(
          input2); // actual remainder, matches the sign of the first operand
  cout << "Whole Remainder:  " << tt << endl;

  doubleuu = (static_cast(tt) / static_cast(input2)) *
             (-10); // whole quotient multiplied by -10 to indicate its sign
  cout << "Actual Remainder: " << rr + static_cast(uu) << endl;

  int yy = pow(input1, input2); // exponentiation
  cout << "Exponentiation:   " << yy << endl;

  return 0;
}