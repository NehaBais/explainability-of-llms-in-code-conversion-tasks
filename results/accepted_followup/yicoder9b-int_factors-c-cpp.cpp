#include <iostream>
#include <vector>
using namespace std;

class Factors {
public:
  vector<int> list;
  short count; // initializing it in the class constructor
  Factors() : count(0) {}
};

void xferFactors(Factors *fctrs, vector<int> &flist, int flix) {
  for (int i = 0; i < flix; ++i) {
    fctrs->list.push_back(flist[i]);
  }
  fctrs->count += flix; // increment the count by number of factors added
}

Factors *factor(int num, Factors *fctrs) {
  vector<int> flist;
  for (int d = 1; d <= num / 2; ++d) {
    if (num % d == 0) {
      flist.push_back(d);
      if (d * d != num) // if the divisor and quotient are not same i.e., factor
                        // pair is not the same e.g., for 25 - factors are 1,25
                        // but no need to add 25/1
        flist.push_back(num / d); // add the corresponding pair
    }
  }
  xferFactors(fctrs, flist,
              (int)flist.size()); // size_t to int cast done for flix parameter
  return fctrs;
}

int main(void) {
  vector<int> nums2factor = {2059, 223092870, 3135, 45};
  Factors ftors;
  char sep;

  for (size_t i = 0; i < nums2factor.size();
       ++i) { // using traditional for loop instead of range-based loop
    int num = nums2factor[i];
    factor(num, &ftors);
    cout << "factors of " << num << " are: \n  ";
    sep = ' ';
    for (size_t j = 0; j < ftors.count;
         ++j) { // using traditional for loop instead of range-based loop
      cout << sep << ftors.list[j];
      sep = ',';
    }
    cout << "\n";
  }
  return 0;
}