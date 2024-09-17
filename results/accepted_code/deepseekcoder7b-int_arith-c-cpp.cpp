#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc < 3) {
    std::exit(1);
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  // error check, exit if second conversion resulted in 0
  if (!b) {
    std::exit(2);
  }

  std::cout << "a+b  = " << a + b << '\n';
  std::cout << "a-b  = " << a - b << '\n';
  std::cout << "a*b  = " << a * b << '\n';

  if (b != 0) {                              // prevent division by zero
    std::cout << "a/b  = " << a / b << '\n'; /* truncates towards 0 */
    int remainder = a % b;
    std::cout << "a%b  = " << remainder << '\n';
  }

  return <｜begin▁of▁sentence｜> // this isn't used in the given code, so it's
                                 // just an example. It doesn't compile as is.
                                 // C++ uses return 0 to indicate successful
                                 // program execution. You might want to wrap
                                 // that with a function or do something similar
                                 // based on your needs.
}