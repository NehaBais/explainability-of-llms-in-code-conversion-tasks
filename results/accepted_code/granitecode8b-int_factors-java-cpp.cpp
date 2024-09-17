#include
#include
using namespace std;
set factors(long n) {
  set factors;
  factors.insert(n);
  factors.insert(1L);
  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  }
  return factors;
}
int main() {
  long n = 24;
  set result = factors(n);
  for (auto factor : result) {
    cout << factor << " ";
  }
  cout << endl;
  return 0;
}