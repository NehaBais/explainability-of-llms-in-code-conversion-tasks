#include
using namespace std;

int main() {
  int input1, input2;

  cout << "Enter first integer: ";
  cin >> input1;

  cout << "Enter second integer: ";
  cin >> input2;

  intqq = input1 + input2;
  cout << "Sum: 		  " << qq << endl;

  int ww = input1 - input2;
  cout << "Difference: 	  " << ww << endl;

  int ee = input1 * input2;
  cout << "Product: 	  " << ee << endl;

  float rr = (float)input1 / input2;
  int ii = rr;
  float tt = rr - ii;
  if (tt == 0.0) {
    cout << "Float quotient:   " << rr << endl;
  } else {
    cout << "Integer quotient: " << ii << endl;
    cout << "Float quotient:   " << tt << endl;
  }

  int yy = pow(input1, input2);
  cout << "Exponentiation:   " << yy << endl;

  return 0;
}