#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  cout << "a + b = " << a + b << endl; // The result of adding 'a' and 'b'
  cout << "a - b = " << a - b
       << endl; // The result of subtracting  'b' from  'a'
  cout << "a * b = " << a * b << endl; // The result of multiplying  'a' and 'b'
  cout << "a / b = " << a / b
       << endl; // The result of dividing  'a' by  'b' (Note: division does not
                // contain the fractional result)
  cout << "remainder of a / b = " << a % b
       << endl; // The remainder of dividing  'a' by  'b'

  return 0;
}