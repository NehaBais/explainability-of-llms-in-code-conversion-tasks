#include
#include

void bitwise\_operations(int a, int b) {
  std::cout << "a AND b: " << (a & b) << '\n'; // bitwise AND operation
  std::cout << "a OR b: " << (a | b) << '\n';  // bitwise OR operation
  std::cout << "a XOR b: " << (a ^ b) << '\n'; // bitwise XOR operation
  std::cout << "NOT a: " << ~a << '\n';        // bitwise NOT operation
  std::cout << "a left shift by b: " << (a << b)
            << '\n'; // left shift operation
  std::cout << "a right arithmetic shift by b: " << (a >> b)
            << '\n'; // right arithmetic shift operation
  std::cout << "a right logical shift by b: " << (a >> b)
            << '\n'; // right logical shift operation
  std::rotate(std::begin(a), std::next(std::begin(a), b), std::end(a));
  std::reverse(std::begin(b), std::end(b));
  std::rotate(std::begin(b), std::next(std::begin(b), a), std::end(b));
}

int main() {
  bitwise\_operations(4, 2);
  return 0;
}