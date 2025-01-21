#include
#include
#include
using namespace std;
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
  return 0;
}