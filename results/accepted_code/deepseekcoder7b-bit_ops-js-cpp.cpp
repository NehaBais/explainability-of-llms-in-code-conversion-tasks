#include <bitset>
#include <iostream>
using namespace std;

void bitwise(int a, unsigned int b) {
  cout << "a AND b: " << (a & b) << "\n";
  cout << "a OR b: " << (a | b) << "\n";
  cout << "a XOR b: " << (a ^ b) << "\n";

  // uncomment below line to see negative result for signed integer
  // cout << "NOT a: " << ~a << "\n";

  if (b < 32) {
    cout << "a left shift by b: " << (a << b) << "\n"; // left shift
    cout << "a right shift by b: " << (a >> b)
         << "\n"; // arithmetic right shift

    // logical right shift for unsigned integer in C++ is different from
    // JavaScript. In JS, it's an arithmetic shift that fills with sign bit(1 or
    // 0). But we cannot directly use '>>>='. So, instead of doing "a >>> b",
    // let's first do right shift then left shift to mimic the behavior of
    // logical right shift in JS
    int ar = (a >> b); // for JavaScript: a >>> b
    cout << "a right shift by b with fill 0: " << (ar << 32) >> (32 - b % 32)
                                                                    << "\n";
  } else {
    cout << "Shift/rotate amount is out of range. It should be less than bit "
            "width\n";
  }
}