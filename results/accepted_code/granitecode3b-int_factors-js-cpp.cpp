#include
#include
using namespace std;
vector factors(int num) {
  vector n_factors;
  for (int i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      n_factors.push_back(i);
      if (i * i != num) {
        n_factors.push_back(num / i);
      }
    }
  }
  sort(n_factors.begin(), n_factors.end());
  return n_factors;
}
int main() {
  int num = 45;
  vector factors = factors(num);
  for (int i = 0; i < factors.size(); i++) {
    cout << factors[i] << " ";
  }
  cout << endl;
  num = 53;
  factors = factors(num);
  for (int i = 0; i < factors.size(); i++) {
    cout << factors[i] << " ";
  }
  cout << endl;
  num = 64;
  factors = factors(num);
  for (int i = 0; i < factors.size(); i++) {
    cout << factors[i] << " ";
  }
  cout << endl;
  return 0;
}