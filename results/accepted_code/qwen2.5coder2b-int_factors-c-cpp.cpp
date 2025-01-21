#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Factors;

void xferFactors(Factors &fctrs, const vector<int> &flist, int flix) {
  if (flix > fctrs.size()) {
    fctrs.resize(flix);
  }
  for (int i = 0; i < flix; i++) {
    fctrs[i] = flist[i];
  }
}

Factors *factor(int num, Factors &fctrs) {
  vector<int> flist;
  int dvsr;
  fctrs.clear();
  for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
    if (num % dvsr != 0)
      continue;
    if (flist.size() > 300) {
      fctrs.resize(flist.size());
    }
    flist.push_back(dvsr);
    flist.push_back(num / dvsr);
  }
  if (dvsr * dvsr == num)
    flist.push_back(dvsr);
  if (flist.size() > 0)
    fctrs = flist;

  return &fctrs;
}

int main() {
  int nums2factor[] = {2059, 223092870, 3135, 45};
  Factors ftors;
  char sep;
  int i, j;

  for (i = 0; i < 4; i++) {
    factor(nums2factor[i], ftors);
    cout << "factors of " << nums2factor[i] << " are: ";
    sep = ' ';
    for (j = 0; j < ftors.size(); j++) {
      cout << sep << ftors[j];
      sep = ',';
    }
    cout << endl;
  }
  return 0;
}