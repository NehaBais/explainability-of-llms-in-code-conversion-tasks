#include <cmath>
#include <iostream>
#include <vector>

class Factors {
public:
  std::vector<int> list;
};

void xferFactors(Factors *fctrs, const std::vector<int> &flist) {
  int newSize = fctrs->list.size() + flist.size();
  if (newSize > flist.size()) {
    fctrs->list.reserve(
        newSize); // Reserve space to avoid multiple reallocations
    fctrs->list.resize(newSize); // Resize the vector to the new size
  } else {
    fctrs->list.clear();
    fctrs->list.reserve(
        newSize); // Reserve space to avoid multiple reallocations
    fctrs->list.resize(newSize); // Resize the vector to the new size
  }
  for (size_t ij = 0, ix = fctrs->list.size(); ix < newSize; ++ij, ++ix) {
    fctrs->list[ix] = flist[ij];
  }
}

Factors *factor(int num) {
  std::vector<int> flist;
  int dvsr;
  for (dvsr = 1; dvsr * dvsr < num; ++dvsr) {
    if (num % dvsr != 0)
      continue;
    flist.push_back(dvsr);
    flist.push_back(num / dvsr);
  }
  if (dvsr * dvsr == num) {
    flist.push_back(dvsr);
  }

  Factors *fctrs = new Factors();
  if (!flist.empty()) {
    xferFactors(fctrs, flist);
  }
  return fctrs;
}

int main() {
  int nums2factor[] = {2059, 223092870, 3135, 45};
  Factors ftors;
  char sep;

  for (int i = 0; i < 4; ++i) {
    Factors *fctrs = factor(nums2factor[i]);
    std::cout << "Factors of " << nums2factor[i] << " are: ";
    sep = ' ';
    for (size_t j = 0; j < fctrs->list.size(); ++j) {
      std::cout << sep << fctrs->list[j];
      sep = ',';
    }
    std::cout << std::endl;
    delete fctrs; // Clean up the Factors object
  }
  return 0;
}