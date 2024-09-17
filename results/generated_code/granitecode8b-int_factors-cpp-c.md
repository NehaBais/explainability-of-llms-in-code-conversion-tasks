Here is the converted code from C++ to C:
```c
#include 
#include 
#include 
using namespace std;
vector GenerateFactors(int n) {
 vector factors = {1, n};
 for (int i = 2; i * i <= n; ++i) {
 if (n % i == 0) {
 factors.push_back(i);
 if (i * i != n)
 factors.push_back(n / i);
 }
 }
 sort(factors.begin(), factors.end());
 return factors;
}
int main() {
 const int SampleNumbers[] = {3135, 45, 60, 81};
 for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
 vector factors = GenerateFactors(SampleNumbers[i]);
 cout << "Factors of ";
 cout.width(4);
 cout << SampleNumbers[i] << " are: ";
 copy(factors.begin(), factors.end(), ostream_iterator(cout, " "));
 cout << endl;
 }
 return EXIT_SUCCESS;
}
```

