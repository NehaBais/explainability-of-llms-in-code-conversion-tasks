#include
#include
int main(int argc, char *argv[]) {
  int a, b;
  if (argc < 3)
    exit(1);
  b = std::atoi(argv[--argc]);
  if (b == 0)
    exit(2);
  a = std::atoi(argv[--argc]);
  std::cout << "a+b = " << a + b << std::endl;
  std::cout << "a-b = " << a - b << std::endl;
  std::cout << "a*b = " << a * b << std::endl;
  // C99 standard: rounds towards 0 (towards negative infinity if negative)
  std::cout << "a/b = " << static_cast<double>(a) / b << std::endl;
  std::cout << "a%%b = " << a % b << std::endl;
}