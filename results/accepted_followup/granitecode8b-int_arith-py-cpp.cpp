#include <iostream>
using namespace std;

int main() {
  int input1, input2;
  cin >> input1 >> input2;

  int sum = input1 + input2;
  cout << "Sum:                   " << sum << endl;

  int difference = input1 - input2;
  cout << "Difference:    " << difference << endl;

  int product = input1 * input2;
  cout << "Product:       " << product << endl;

  float quotient = static_cast<float>(input1) / static_cast<float>(input2);
  cout << "Quotient:      " << quotient << endl;

  return 0;
}