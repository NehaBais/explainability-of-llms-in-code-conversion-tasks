#include
#include
#include
int main(int argc, char *argv[]) {
  // Case-sensitive comparisons.
  std::string a((argc > 1) ? argv[1] : "1.2.Foo");
  std::string b((argc > 2) ? argv[2] : "1.3.Bar");
  std::cout << a << " and " << b << " are " << ((a == b) ? "" : "not ")
            << "exactly equal." << std::endl;

  std::cout << a << " and " << b << " are " << ((a != b) ? "" : "not ")
            << "inequal." << std::endl;

  std::cout << a << " is " << ((a < b) ? "" : "not ") << "ordered before " << b
            << '.' << std::endl;

  std::cout << a << " is " << ((a > b) ? "" : "not ") << "ordered after " << b
            << '.' << std::endl;
  return 0;
}