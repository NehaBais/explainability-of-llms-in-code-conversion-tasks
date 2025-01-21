#include <iostream>
using namespace std;

int bitwise(int a, int b) {
  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;
  cout << "NOT a: " << (~a) << endl;
  cout << "a << b: " << (a << b) << endl; // left shift
  cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
    cout << "a >>> b: " << (unsigned int)a >> b) << endl; // logical right shift

    return 0;
}