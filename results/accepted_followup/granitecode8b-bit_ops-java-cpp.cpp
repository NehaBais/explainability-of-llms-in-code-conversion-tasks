#include
void bitSwapRequired(int n1, int n2) {
  int x = n1 ^ n2;
  int count = 0;
  while (x != 0) {
    count++;
    x &= x - 1;
  }
  std::cout << "Number of bits required to swap : " << count << std::endl;
}
int main() {
  int n1 = 10, n2 = 5;
  bitSwapRequired(n1, n2);
  std::cout << "End of program" << std::endl;
  return 0;
}