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
  cout << "Difference:    " << ww << endl;

  int ee = input1 * input2;
  cout << "Product:       " << ee << endl;

  float rr = (float)input1 / (float)input2;
  cout << "Float quotient:   " << rr << endl;

  int ii = 5 / input2;
  cout << "Integer quotient: " << ii << endl;
}