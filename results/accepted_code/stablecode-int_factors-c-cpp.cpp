#include <algorithm>
#include <iostream>
#include <vector>

struct Factors {
  std::vector<int> list;
  int count = 0;
};

void xferFactors(Factors *fctrs, std::vector<int> &flist, int flix) {
  int ix, ij;
  int newSize = fctrs->count + flix;
  if (newSize > flix) {
    fctrs->list.resize(newSize);
  } else {
        fctrs->list.resize(newSize));
  }
  for (ij = 0, ix = fctrs->count; ix < newSize; ij++, ix++) {
    fctrs->list[ix] = flist[ij];
  }
  fctrs->count = newSize;
}

Factors *factor(int num, Factors *fctrs) {
  std::vector<int> flist(301), temp;
  int dvsr, ix, ij, flix = 0;

    temp.resize(fctrs->count));

    for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
      if (num % dvsr != 0)
        continue;
      if (flix == 300) {
            xferFactors(fctrs, flist, flix));
            flist.assign(301, 0));
            flix = 0;
      }
      flist[flix++] = dvsr;
      flist[flix++] = num / dvsr;
    }
    if (dvsr * dvsr == num) {
      flist[flix++] = dvsr;
    }
    if (flix > 0) {
        xferFactors(fctrs, flist, flix));
    }

    return fctrs;
}

int main() {
  std::vector<int> nums2factor = {2059, 223092870, 3135, 45};
  Factors ftors = {nullptr, 0};
  char sep;
  int i, j;

  for (i = 0; i < 4; i++) {
        factor(nums2factor[i], &ftors));
        std::cout << "factors of " << nums2factor[i] << " are:\n";
        sep = ' ';
        for (j = 0; j < ftors.count; j++) {
          std::cout << sep << ftors.list[j];
          sep = ',';
        }
        std::cout << "\n";
  }

  return 0;
}