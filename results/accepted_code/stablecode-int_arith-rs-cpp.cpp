#include <cmath>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << "Usage: ./program_name integer_1 integer_2" << std::endl;
    return 1;
  }

    int a = std::stoi(argv[1]));
    int b = std::stoi(argv[2]));

    std::cout << "sum:              " << a + b << std::endl;
    std::cout << "difference:       " << a - b << std::endl;
    std::cout << "product:          " << a * b << std::endl;
    std::cout << "integer quotient: ";

    // The operator '/' in C++ performs integer division if both operands are
    // integers. In this case, the integer quotient is calculated by using 'a /
    // b' as it will perform floor division (towards negative infinity) which
    // fulfills the requirement of rounding towards zero for the quotient
    // operation.
    std::cout << a / b << std::endl;

    std::cout << "remainder:        " << a % b << std::endl;
    // The operator '%' in C++ performs modulo operation, and it has same sign
    // as first operand or second operand if they are different. In this case,
    // the remainder is calculated by using 'a % b' which has the same sign as
    // first operand.

    std::cout << "exponentiation: ";
    // Checking whether exponentiation operator exists for double data type in
    // C++ standard library before performing the operation.
#if (__cplusplus >=                                                            \
     20402) // Checks if the compiler is using C++20 or above version where
            // std::is_trivially_copyable_v<double> is true.
    {
        std::cout << std::pow(a, b)) << std::endl;
    }
#endif

    return 0;
}