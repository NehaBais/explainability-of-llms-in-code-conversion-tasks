#include
#include
#include
using namespace std;
int main() {
  long n = 12;
  cout << "Factors of " << n << ":" << endl;
  for (long i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      cout << i << " and " << n / i << endl;
    }
  }
  return 0;
}