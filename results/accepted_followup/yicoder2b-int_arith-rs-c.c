#include <iostream>
using namespace std;

int main() {
  long long a, b; // use long long to avoid overflow
  cin >> a >> b;

  cout << "sum:              " << (a + b) << endl;
  cout << "difference:       " << (a - b) << endl;
  cout << "product:          " << (a * b) << endl;
  cout << "integer quotient: " << (long long)(a / b)
       << endl; // rounds towards zero
                // you can replace `/` with a function like trunc() or round(),
                // but it will be more complex and slower
  cout << "remainder:        " << (a % b)
       << endl; // sign of remainder is the same as the first operand if they
                // are different

  return 0;
}