#include <iostream>

int main() {
  int A, B;
  std::cout << "Enter two integers: ";
  std::cin >> A >> B;

  std::cout << A << " + " << B << " = " << (A + B) << "\n";
  std::cout << A << " - " << B << " = " << (A - B) << "\n";
  std::cout << A << " * " << B << " = " << (A * B) << "\n";

  // C++ does not support floating point arithmetic for integer division.
  // If you want to get a float or double result, you can use the
  // static_cast<double> operator.
  std::cout << A << " / " << B << " = " << (static_cast<double>(A) / B) << "\n";

  int remainder = A % B;
  std::cout << A << " % " << B << " = " << remainder << "\n";

  if (remainder < 0 && B > 0 || remainder > 0 && B < 0) {
    // If the signs are different, we add a negative sign.
    std::cout << A << " % " << B << " = -" << (-remainder) << "\n";
  }

  return 0;
}