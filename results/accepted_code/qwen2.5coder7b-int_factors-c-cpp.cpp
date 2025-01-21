#include <cstdlib>
#include <iostream>
#include <vector>

struct Factors {
  std::vector<int> list;
};

void xferFactors(Factors &fctrs, const int *flist, size_t flix) {
  for (size_t i = 0; i < flix; ++i) {
    fctrs.list.push_back(flist[i]);
  }
}

Factors factor(int num, Factors &fctrs) {
  fctrs.list.clear();
  int dvsr;
  for (dvsr = 1; dvsr * dvsr <= num; ++dvsr) {
    if (num % dvsr != 0)
      continue;
    xferFactors(fctrs, &dvsr, 2);
  }
  if (dvsr * dvsr == num)
    fctrs.list.push_back(dvsr);
  return fctrs;
}

int main() {
  int numsToFactor[] = {2059, 223092870, 3135, 45};
  Factors ftors;

  for (const auto &num : numsToFactor) {
    factor(num, ftors);
    std::cout << "factors of " << num << " are: ";
    for (size_t i = 0; i < ftors.list.size(); ++i) {
      if (i != 0)
        std::cout << ", ";
      std::cout << ftors.list[i];
    }
    std::cout << std::endl;
  }

  return 0;
}