#include <iostream>
using namespace std;
int main() {
  int input1 = 18;
  // cin >> input1;
  int input2 = 7;
  // cin >> input2;

  int qq = input1 + input2;
  cout << "Sum:            " << qq << endl;
  int ww = input1 - input2;
  cout << "Difference:     " << ww << endl;
  int ee = input1 * input2;
  cout << "Product:        " << ee << endl;
  float rr = (float)input1 / input2;
  cout << "Float quotient: " << rr << endl;
  double tt = static_cast<double>(input1) / input2;
  int uu = round(tt);
  cout << "Integer Remainder:  " << uu << endl;
  cout << "Actual Remainder:   "
       << ((static_cast<int>(static_cast<float>(input1))) %
           (static_cast<int>(static_cast<float>(input2))))
       << endl;
  int yy = pow(input1, input2);
  cout << "Exponentiation:  " << yy << endl;

  return 0;
}