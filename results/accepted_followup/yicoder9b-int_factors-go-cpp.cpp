#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void printFactors(long long int nr) {
  if (nr < 1) {
    cout << "\nFactors of " << nr << " not computed" << endl;
    return;
  }
  vector<int> fs{1};

  auto apf = [&](long long int p, int e) {
    int n = fs.size();
    for (int i = 0, pp = p; i < e; ++i, pp *= p) {
      for (int j = 0; j < n; ++j)
        fs.push_back(fs[j] * pp);
    }
  };

  int e = 0;
  while ((nr & 1) == 0) {
    nr >>= 1;
    e++;
  }
  apf(2, e);

  for (long long int d = 3; nr > 1; d += 2) {
    if (d * d > nr)
      d = nr;
    e = 0;
    while (nr % d == 0) {
      nr /= d;
      ++e;
    }
  }

  cout << "Factors: ";
  for (int i = 0; i < fs.size();
       ++i) { // use regular loop to iterate over the vector elements
    cout << fs[i] << " ";
  }
  cout << endl;
}

int main() {
  printFactors(600851475143LL); // call function with long long int literal
  return 0; // required for the program to compile and run correctly.
}