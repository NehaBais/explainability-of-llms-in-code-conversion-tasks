#include <iostream>
#include <vector>

struct Factors {
  std::vector<int> list;
  int count;
};

void xferFactors(Factors &fctrs, const std::vector<int> &flist) {
  for (auto ix = fctrs.list.size(); ix < flist.size(); ix++) {
    fctrs.list.push_back(flist[ix]);
  }
}

Factors factor(int num, Factors &fctrs) {
  std::vector<int> flist;
  for (int dvsr = 1; dvsr * dvsr < num; ++dvsr) {
    if (num % dvsr != 0 || fctrs.list.size() == 300) {
      continue;
    }
    flist.push_back(dvsr);
    flist.push_back(num / dvsr);
  }
  if (dvsr * dvsr == num) {
    flist.push_back(dvsr);
  }
  xferFactors(fctrs, flist);

  return fctrs;
}

int main() {
  int nums2factor[] = {2059, 223092870, 3135, 45};
  Factors ftors{};
  char sep;

  for (int i = 0; i < sizeof(nums2factor) / sizeof(nums2factor[0]); ++i) {
    factor(nums2factor[i], ftors);

    std::cout << "Factors of " << nums2factor[i] << " are: ";
    sep = ' ';
    for (int j = 0; j < ftors.list.size(); ++j) {
      std::cout << sep << ftors.list[j];
      sep = ',';
    }
    std::cout << "\n";
  }

  return 0;
}