#include
#include
using namespace std;
vector factors(int num) {
  vector n_factors;
  int i;
  for (i = 1; i <= sqrt(num); i += 1) {
    if (num % i == 0) {
      n_factors.push_back(i);
      if (num / i != i) {
        n_factors.push_back(num / i);
      }
    }
  }
  sort(n_factors.begin(), n_factors.end()); // numeric sort
  return n_factors;
}
int main() {
  int num = 16;
  vector factors = factors(num);
  cout << "[";
  for (int i = 0; i < factors.size(); i++) {
    if (i > 0) {
      cout << ", ";
    }
    cout << factors[i];
  }
  cout << "]" << endl;
  return 0;
}