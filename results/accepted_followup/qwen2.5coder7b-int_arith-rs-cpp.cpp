#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  std::cout << "sum:              " << a + b << "\n";
  std::cout << "difference:       " << a - b << "\n";
  std::cout << "product:          " << a * b << "\n";

  // integer quotient, rounds towards zero
  int quotient = (a >= 0) ? (b >= 0) ? a / b : -(unsigned)a / unsigned(b)
                          : (b >= 0) ? -((unsigned)a + unsigned(b)-1) / unsigned(b)
                                     : ((unsigned)a + unsigned(b)-1) / unsigned(-b));
  std::cout << "integer quotient: " << quotient << "\n";

  // remainder, matches sign of the first operand
  int remainder = (a >= 0) ? (b >= 0) ? a % b : -(unsigned)a % unsigned(b)
                           : (b >= 0) ? -((unsigned)a + unsigned(b)-1) % unsigned(b)
                                      : ((unsigned)a + unsigned(b)-1) % unsigned(-b));
  std::cout << "remainder:        " << remainder << "\n";

  // exponentiation
  int base = a;
  int exp = b;
  int power = 1;
  for (int i = 0; i < abs(exp); ++i)
    power *= base;

  std::cout << "exponentiation:     " << ((exp >= 0) ? power : -power) << "\n";
  return 0;
}